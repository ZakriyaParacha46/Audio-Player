#include "aud_player2.h"


audio::audio() {}
audio::audio(std::string n, std::string a) :name(n), addr(a) {}
std::string audio::get_name() {
		return name;
	}
std::string audio::get_addr() {
	return addr;
}
	void audio::play() {
		std::cout << "addr:" << addr << std::endl;
		std::string command = "play " + addr;
		//cout << command;
		mciSendStringA(command.c_str(), NULL, 0, NULL);
	}
	void audio::pause() {

		std::string command = "pause  " + addr;
		mciSendStringA(command.c_str(), NULL, 0, NULL);
	}
	void audio::stop() {

		std::string command = "stop " + addr;
		mciSendStringA(command.c_str(), NULL, 0, NULL);
	}
	void audio::resume() {
		std::string command = "resume " + addr;
		mciSendStringA(command.c_str(), NULL, 0, NULL);
	}

void aud_playerv2::welcome(int time) {
	std::cout << "----------Welcome-----------\n";
	std::cout << name<<"\n";
	std::cout << model<<"\n";
	Sleep(time);
	system("CLS");

}
aud_playerv2::aud_playerv2(int s, std::string n , std::string m )
	{
		size = s;
		aud_arr = new audio[s];
		index = 0;
		name = n;
		model = m;
	}
	bool aud_playerv2::loaded()
	{
		if (size > 0) { return true; }
		return false;
	}
	void aud_playerv2::add_aud(audio new_aud) {
		audio* temp = new audio[size]; //making temp arry

		for (int i = 0; i < size; i++) //copying old arry in temp
		{
			temp[i] = aud_arr[i];
		}

		delete[]aud_arr; //deleting old arr

		aud_arr = new audio[size + 1]; //creating new bigger arr

		for (int i = 0; i < size; i++) //copyinh temp t arr
		{
			aud_arr[i] = temp[i];
		}
		aud_arr[size] = new_aud; //adding new song in arr
		delete[]temp; //delete temp
		size++;
	}
	void aud_playerv2::show_playlist() {
		std::cout << "----------------------------\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << i + 1 << ": " << aud_arr[i].get_name() << std::endl;
		}
		std::cout << "---------------------------\n";
	}
	void aud_playerv2::clean_playlist() {
		delete[]aud_arr;
		size = 0;
		aud_arr = new audio[0];
		index = 0;
	}
	void aud_playerv2::next() {
		std::cout << "----------------------------\n";
		aud_arr[index].stop();
		if (index + 1 < size) {
			index++;
			//run(index);
		}
		else
		{
			index = 0;
			//run(index);
		}

	}
	void aud_playerv2::previous() {
		std::cout << "----------------------------\n";
		aud_arr[index].stop();
		if (index - 1 >= 0) {
			index--;
			//run(index);
		}
		else {
			index = size - 1;
			//run(index);
		}

	}
	void aud_playerv2::shuffle() {
		srand(time(NULL));

		for (int i = size - 1; i > 0; i--)
		{
			int j = rand() % (i + 1);
			audio temp = aud_arr[i];
			aud_arr[i] = aud_arr[j];
			aud_arr[j] = temp;
		}
	}
	void aud_playerv2::jump_to() {
		aud_arr[index].stop();
		int x;
		std::cout << "Enter the songno you want to jumpto: ";
		std::cin >> x;
		index = x - 1;
		//run(x - 1);
	}
	audio aud_playerv2::getsong(int a) {
		return aud_arr[a];
	}
	int  aud_playerv2::getsize() {return size;}
	int aud_playerv2::getindex() {return index;}
	void aud_playerv2::save_playlist(std::string name)
	{
		struct stat buffer;
		if (stat(".\\playlists", &buffer) != 0) {
			int x=mkdir(".\\playlists");
		}
		
		std::fstream file;
		file.open(".\\playlists\\" + name +".txt", std::ios::out);
		for (int i = 0; i < size; i++) 
		{
			file << aud_arr[i].get_name() << " " << aud_arr[i].get_addr()<<std::endl;
		}
	
	};
	void aud_playerv2::load_playlist(std::string name)
	{
		clean_playlist();
		std::fstream file;
		file.open(name, std::ios::in);
		while (!file.eof())
		{
			std::string name;
			std::string addr;
			file>> name;
			file>> addr;
			audio ad(name, addr);
			add_aud(ad);
		}
		size--;
	};
	int aud_playerv2::search_aud(std::string name)
	{
		for (int i = 0; i < size; i++) 
		{
			if (aud_arr[i].get_name() == name) {
				return i;
			} 
		}
		return -1;
	
	}
	void aud_playerv2::delete_aud(int id)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == id)
			{
				audio* newArray = new audio[size - 1];
				std::copy(aud_arr, aud_arr + i, newArray);
				std::copy(aud_arr + i + 1, aud_arr + size, newArray + i);
				delete[] aud_arr;
				aud_arr = newArray;
				--size;
			}
		}
	}
	aud_playerv2::~aud_playerv2() { delete[]aud_arr; aud_arr = nullptr; }

