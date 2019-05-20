// Utils.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <ctime>
#include <string>


#define SODIUM_STATIC

#include "sodium.h"


using namespace std;


unsigned char hash_code[crypto_shorthash_BYTES];
unsigned char key[crypto_shorthash_KEYBYTES];


void printToHex(const unsigned char *data, size_t length)
{
	for (int i = 0; i < length; i++)
	{
		if (i != 0 && (i % 16 == 0)) printf("\n");

		printf("%02X ", *(data + i) & 0xff);
	}
}

int main()
{
	// get the current UTC
	time_t timer = time(NULL);
	struct tm tm;

	time(&timer);

	gmtime_s(&tm, &timer);

	char timestamp[15];
	sprintf_s(timestamp, "%04d%02d%02d%02d%02d%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

	// generate a hash
	crypto_shorthash_keygen(key);
	
	string message = "LABTES";
	message.append(timestamp);

	crypto_shorthash(hash_code, (unsigned char*)message.data(), message.length(), key);

	printf("========== message: %s\n", message.c_str());
	printToHex((unsigned char*)message.data(), message.length());
	printf("\n\n");

	printf("========== key\n");
	printToHex(key, sizeof key);
	printf("\n\n");

	printf("========== hash\n");
	printToHex(hash_code, sizeof hash_code);
	printf("\n");

    return 0;
}

