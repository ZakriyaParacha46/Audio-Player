#include "storage_media.h"

storage_media::storage_media() {}
storage_media::storage_media(std::string n, std::string a, int size, float sps) :name(n), addr(a), size_gb(size), sizeps(sps) {
	if (count_aud(addr) * sizeps > size_gb ) { 
		std::cout << "Error: the size of the files exceed the storage device: "<< name<<"\n";
		//system("pause");
	}
}
std::string storage_media::get_addr() { return addr; }
std::string storage_media::get_name() { return name; }
int storage_media::count_aud(std::string addr) {
	int count = 0;
	
	DIR* pdir = opendir(addr.c_str());
	struct dirent* pent = NULL;

	while (pent = readdir(pdir))
	{
		std::string name = pent->d_name;
		if (name.size() > 4) {
			std::string extention = name.substr(int(name.size() - 4), name.size());
			if (extention == ".wav" || extention == ".mp3") {
				count++;
			}
		}
	}
	return count;
	closedir(pdir);
}
int storage_media::get_size() { return size_gb; }
float storage_media::storage_taken() { return count_aud(addr)* sizeps; }
