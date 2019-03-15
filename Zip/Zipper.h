#ifndef ZIPPER_H
#define ZIPPER_H

#include <string>
#include <vector>

#include "zip.h"


class Zipper
{
public:
	static bool Zip(const std::string &source_path, const std::string &zip_file_path, const std::string &password = std::string());
	static bool Unzip(const std::string &zip_file_path, const std::string &target_path, const std::string &password = std::string());

	static std::vector<zip_stat_t> GetZipEntry(const std::string &path);

private:
	static bool AddFile(zip_t *archive, const std::string &path, const std::string &name, const std::string &password = std::string());
	static bool AddDir(zip_t *archive, const std::string &path, const std::string &name, const std::string &password = std::string());
	
	static std::vector<std::pair<std::string, uint32_t>> GetEntry(const std::string &path);
	static bool IsDirExists(const std::string &path);
};

#endif // ZIPPER_H