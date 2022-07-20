#pragma once
#include <iostream>
#include "dirent.h"
#include "aud_player2.h"
#include "storage_media.h"

class navigation {
	std::string current_addr;
	std::string file_addr;
	DIR* pdir = NULL;
	bool mounted;
	storage_media dev;
public:
	navigation(std::string path = ".");
	void mount(storage_media sm);
	void unmount();
	bool ismounted();
	bool exists(std::string path);
	void show_dir();
	void enter_dir();
	void load(aud_playerv2& ap);
	std::string getmounted();
	std::string get_path();
};

