#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <fstream>
#include <direct.h>

class audio {
	std::string name;
	std::string addr;
public:
	audio();
	audio(std::string n, std::string a);
	std::string get_name();
	std::string get_addr();
void play();
void pause();
void stop();
void resume();

};

class aud_playerv2 {
	audio* aud_arr;
	int size;
	int index;
	std::string name, model;
public:
	aud_playerv2(int s = 0, std::string n= "player", std::string m= "2k22");
	bool loaded();
	void add_aud(audio);
	void welcome(int time= 3000);
	void show_playlist();
	void shuffle();
	void next();
	void clean_playlist();
	void previous();
	void jump_to();
	audio getsong(int );
	int getsize();
	int getindex();
	~aud_playerv2();
	void save_playlist(std::string);
	void load_playlist(std::string);
	int search_aud(std::string);
	void delete_aud(int);
};