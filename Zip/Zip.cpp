// Zip.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Zipper.h"

#include <windows.h>

enum ZipExceptionErrors
{
	OK = 0,
	INVALID_COMMAND,
	ZIP_FAILURE,
	UNZIP_FAILURE,
};

#define SOURCE_PATH "d:\\Temp\\ziptest"
#define ZIP_PATH	"d:\\Temp\\ziptest.zip"

#define TARGET_PATH "d:\\Temp\\unziptest"
#define UNZIP_PATH	"d:\\Temp\\unziptest.zip"


void PrintUsage()
{
	printf("Usage: Zip.exe [option] [source_path] [target_path]\n");
	printf("option\n");
	printf("\t-z\tZip files and folders\n");
	printf("\t-u\tUnzip files and folders\n");
	printf("\t-l\tGet filenames\n");
	printf("\t-h\tPrint usage\n");
}

int main(int argc, char **argv)
{
	bool vaild_command = true;
	
	std::vector<zip_stat_t> entry;

	try
	{
		if (argc <= 2 || argc > 4) throw INVALID_COMMAND;

		std::string option(argv[1]);
		if (option.size() != 2 || option.at(0) != '-') throw INVALID_COMMAND;

		clock_t ck;

		switch (option.at(1))
		{
		case 'z':
			if (argc != 4) throw INVALID_COMMAND;

			ck = clock();
			if (Zipper::Zip(std::string(argv[2]), std::string(argv[3]))) printf("zipping success\n");
			else throw ZIP_FAILURE;

			ck = clock() - ck;
			printf("zipping time: %f\n", ck * 1.f / CLOCKS_PER_SEC);

			break;
		case 'u':
			if (argc != 4) throw INVALID_COMMAND;

			ck = clock();
			if (Zipper::Unzip(std::string(argv[2]), std::string(argv[3]))) printf("unzipping success\n");
			else throw UNZIP_FAILURE;

			ck = clock() - ck;
			printf("unzipping time: %f\n", ck * 1.f / CLOCKS_PER_SEC);
			break;
		case 'l':
			if (argc != 3) throw INVALID_COMMAND;
			
			entry = Zipper::GetZipEntry(std::string(argv[2]));
			for (auto stat : entry)
			{
				printf("%c\t%s\n",
					(stat.name[strlen(stat.name) - 1] == '/') ? 'd' : 'f',
					stat.name
				);
			}

			break;
		default:
			PrintUsage();
			break;
		}

	}
	catch (ZipExceptionErrors e)
	{
		switch (e)
		{
		case INVALID_COMMAND:
			PrintUsage();
			break;
		case ZIP_FAILURE:
			printf("zipping failure\n");
			break;
		case UNZIP_FAILURE:
			printf("unzipping failure\n");
			break;
		}
	}

    return 0;
}