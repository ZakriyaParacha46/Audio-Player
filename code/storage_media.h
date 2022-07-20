#pragma once
#include <iostream>
#include "dirent.h"

class storage_media {
	std::string addr;
	std::string name;
	int size_gb;
	float sizeps;
public:
	storage_media();
	storage_media(std::string n, std::string a, int size, float sizepersong = 1);
	std::string get_name();
	std::string get_addr();
	int get_size();
	int count_aud(std::string add);
	float storage_taken();
};