#include "stdafx.h"
#include "Zipper.h"

#include <windows.h>
#include <direct.h>
#include <io.h>

#include <fstream>


using namespace std;


#define DIRECTORY_SEPARATOR	'\\'

#define READ_BUFFER_SIZE	(1024)


bool Zipper::Zip(const string &source_path, const string &zip_file_path, const string &password/* = string()*/)
{
	vector<pair<string, uint32_t>> entry = GetEntry(source_path);
	if (entry.empty())
	{
		printf("empty directory\n");
		return false;
	}

	int errorp;

	// create a new archive
	// ZIP_CHECKCONS : Perform additional stricter consistency checks on the archive, and error if they fail.
	// ZIP_CREATE : Create the archive if it does not exist.
	// ZIP_EXCL : Error if archive already exists.
	// ZIP_TRUNCATE : If archive exists, ignore its current contents. In other words, handle it the same way as an empty archive.
	// ZIP_RDONLY : Open archive in read-only mode.

	zip_t *archive = zip_open(zip_file_path.c_str(), ZIP_CREATE | ZIP_TRUNCATE, &errorp);
	if (archive == nullptr)
	{
		printf("failed to open: %s\n", zip_strerror(archive));
		return false;
	}

	for (auto file : entry)
	{
		if (file.second & FILE_ATTRIBUTE_DIRECTORY)
			AddDir(archive, source_path + DIRECTORY_SEPARATOR + file.first, file.first);
		else
			AddFile(archive, source_path + DIRECTORY_SEPARATOR + file.first, file.first, password);
	}

	// close
	if (archive && zip_close(archive) < 0)
	{
		printf("failed to close the archive: %s\n", zip_strerror(archive));
		return false;
	}

	return true;
}

bool Zipper::Unzip(const string &zip_file_path, const string &target_path, const string &password/* = string()*/)
{
	if (!IsDirExists(target_path))
	{
		if (_mkdir(target_path.c_str()) != 0)
		{
			printf("failed to create the directory: %s\n", target_path.c_str());
			return false;
		}
	}

	int errorp;
	zip_t *archive = zip_open(zip_file_path.c_str(), 0, &errorp);
	if (archive == nullptr)
	{
		printf("failed to open: %s\n", zip_file_path.c_str());
		return false;
	}

	if (!password.empty())
	{
		if (zip_set_default_password(archive, password.c_str()) < 0)
			printf("failed to set password: %s\n", zip_strerror(archive));
	}

	zip_stat_t stat;
	for (zip_int64_t i = 0; i < zip_get_num_entries(archive, 0); i++)
	{
		if (zip_stat_index(archive, i, 0, &stat) == 0)
		{
			printf("=================================================\n");
			printf("name: %s\n", stat.name);
			printf("index: %llu\n", stat.index);
			printf("size: %llu / %llu\n", stat.comp_size, stat.size);
		}

		string name(stat.name);
		if (name.back() == '/')
		{
			// create the directory
			string dir_path = target_path + DIRECTORY_SEPARATOR + stat.name;
			if (_mkdir(dir_path.c_str()) != 0)
				printf("failed to create the directory: %s\n", dir_path.c_str());
		}
		else
		{
			// create the file
			zip_file_t *file = zip_fopen_index(archive, i, 0);
			if (file == nullptr)
			{
				printf("failed to open the zip source file: %s\n", zip_strerror(archive));
				continue;
			}

			string out_path = target_path + DIRECTORY_SEPARATOR + stat.name;
			ofstream out_file(out_path.c_str(), ofstream::binary);
			
			zip_uint64_t offset = 0;
			char read_buffer[READ_BUFFER_SIZE];

			while (offset < stat.size)
			{
				zip_int64_t read_byte = zip_fread(file, read_buffer, READ_BUFFER_SIZE);
				if (read_byte < 0)
				{
					printf("failed to read a data: %s\n", stat.name);
					break;
				}

				out_file.write(read_buffer, read_byte);
				
				offset += read_byte;
			}

			out_file.close();

			if (zip_fclose(file) != 0)
				printf("failed to close the zip source file: %s\n", zip_strerror(archive));
		}
	}

	// close
	if (archive && zip_close(archive) < 0)
	{
		printf("failed to close the archive: %s\n", zip_strerror(archive));
		return false;
	}

	return true;
}

vector<zip_stat_t> Zipper::GetZipEntry(const std::string &path)
{
	int errorp;

	std::vector<zip_stat_t> entry;

	zip_t *archive = zip_open(path.c_str(), 0, &errorp);
	if (archive == nullptr)
	{
		printf("failed to open: %s\n", path.c_str());
	}
	else
	{
		for (zip_int64_t i = 0; i < zip_get_num_entries(archive, 0); i++)
		{
			zip_stat_t stat;
			if (zip_stat_index(archive, i, 0, &stat) == 0)
				entry.push_back(stat);
		}
	}

	return entry;
}

bool Zipper::AddFile(zip_t *archive, const string &path, const string &name, const string &password/* = string()*/)
{
	if (archive == nullptr) return false;
	if (path.empty() || name.empty()) return false;

	zip_source_t *source = zip_source_file(archive, path.c_str(), 0, 0);
	if (source == nullptr)
	{
		printf("failed to create zip source from '%s': %s\n", name.c_str(), zip_strerror(archive));
		return false;
	}

	zip_int64_t index = zip_file_add(archive, name.c_str(), source, ZIP_FL_OVERWRITE | ZIP_FL_ENC_UTF_8);
	if (index < 0)
	{
		zip_source_free(source);
		printf("%s\n", zip_strerror(archive));
		
		return false;
	}

	if (!password.empty())
	{
		if (zip_file_set_encryption(archive, index, ZIP_EM_AES_128, password.c_str()) < 0)
			printf("failed to set password: %s\n", zip_strerror(archive));
	}

	printf("added file: %s\n", name.c_str());

	return true;
}

bool Zipper::AddDir(zip_t *archive, const string &path, const string &name, const string &password/* = string()*/)
{
	if (archive == nullptr) return false;
	if (path.empty() || name.empty()) return false;

	if (zip_dir_add(archive, name.c_str(), ZIP_FL_ENC_UTF_8) < 0)
	{
		printf("failed to add the directory: %s\n", zip_strerror(archive));
		return false;
	}

	printf("added dir: %s\n", name.c_str());

	vector<pair<string, uint32_t>> entry = GetEntry(path);
	for (auto file : entry)
	{
		if (file.second & FILE_ATTRIBUTE_DIRECTORY)
			AddDir(archive, path + DIRECTORY_SEPARATOR + file.first, name + DIRECTORY_SEPARATOR + file.first);
		else
			AddFile(archive, path + DIRECTORY_SEPARATOR + file.first, name + DIRECTORY_SEPARATOR + file.first, password);
	}

	return true;
}

vector<pair<string, uint32_t>> Zipper::GetEntry(const string &path)
{
	vector<pair<string, uint32_t>> entry;

	// get all files in the source path
	HANDLE hFind = INVALID_HANDLE_VALUE;
	WIN32_FIND_DATA ffd;

	// convert to wide char array
	wstring search_pattern = wstring(path.begin(), path.end()) + L"\\*";

	// get files in the path
	hFind = FindFirstFile(search_pattern.c_str(), &ffd);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (wcscmp(L".", ffd.cFileName) == 0 || wcscmp(L"..", ffd.cFileName) == 0) continue;

			entry.push_back(
				make_pair(string(ffd.cFileName, ffd.cFileName + wcslen(ffd.cFileName))
					, ffd.dwFileAttributes));

		} while (FindNextFile(hFind, &ffd) != 0);
	}

	return entry;
}

bool Zipper::IsDirExists(const std::string &path)
{
	if (_access(path.c_str(), 0) == 0)
	{
		struct stat status;
		stat(path.c_str(), &status);

		return (status.st_mode & S_IFDIR) != 0;
	}

	return false;
}