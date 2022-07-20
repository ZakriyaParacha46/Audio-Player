#include "navigation.h"

navigation::navigation(std::string path)
	{
		current_addr = path;
		mounted = false;
	}
	void navigation::mount(storage_media sm)
	{
		if (mounted) {
			std::cout << dev.get_name() << " is already mounted" << std::endl;
		}
		else {
			current_addr = sm.get_addr();
			std::cout << sm.get_name() << " is mounted " << std::endl;
			//dev = sm;
			mounted = true;
		}
	}
	std::string  navigation::getmounted() { return dev.get_name(); }
	void navigation::unmount()
	{
		if (mounted) {
			current_addr = ".";
			mounted = false;
			std::cout << "device is unmounted\n";
		}
		else
		{
			std::cout << "Nothing is mounted" << std::endl;
		}
	}
	bool navigation::ismounted()
	{
		return mounted;
	}
	bool navigation::exists(std::string path) {
		DIR* dir = opendir(path.c_str());
		if (dir) {
			return true;
		}
		return false;

	}
	void navigation::show_dir()
	{

		pdir = opendir(current_addr.c_str());
		struct dirent* pent = NULL;

		while (pent = readdir(pdir))
		{
			std::cout << pent->d_name << std::endl;
		}
		closedir(pdir);
	}
	void navigation::enter_dir() {
		std::string dir;
		std::cout << "Enter the name of Dir(b to back in dir): ";
		std::cin >> dir;
		std::string ch = "\\";

		if (dir == "b")
		{
			int ind = current_addr.find_last_of(ch);
			current_addr = current_addr.substr(0, ind);
		}

		else
		{
			if (exists(current_addr + "\\" + dir))
			{
				current_addr = current_addr + "\\" + dir;
			}
			else
			{
				std::cout << "Following dir doesnot exist\n";
			}
		}

	}
	void navigation::load(aud_playerv2& ap)
	{
		int cnt = dev.count_aud(current_addr);
		if (cnt == 0)
		{
			std::cout << "The folder have no .mp3,.wav files \n";
		}
		pdir = opendir(current_addr.c_str());
		struct dirent* pent = NULL;

		while (pent = readdir(pdir))
		{
			std::string name = pent->d_name;
			if (name.size() > 4) {
				std::string extention = name.substr(int(name.size() - 4), name.size());
				std::string justname = name.substr(0, int(name.size() - 4));
				if (extention == ".wav" || extention == ".mp3") {
					audio aud(justname, current_addr + "\\" + name);
					ap.add_aud(aud);
				}
			}
		}

	}
	std::string navigation::get_path() { return current_addr; }
