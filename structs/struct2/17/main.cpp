#include <iostream>
#include <limits>
#include <vector>
#include "mainf.cpp"

void totalconsume(std::vector <ELECTROD> *velectrod,unsigned short &timeday);

int main() {
	
	std::vector <ELECTROD> velectrod(5);
	unsigned short timeday{};
	
	for(size_t i = 0; i < velectrod.size(); ++i){
		
		std::cout << "Type name electrodomestic: ";
		std::cin.getline(velectrod.at(i).electroname,_electrodW);
		std::cout << "Type pontece(KW): ";
		std::cin >> velectrod.at(i).potenceKW;
		std::cout << "Type time active for hour: ";
		std::cin >> velectrod.at(i).activetimeH;
		
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	std::cout << std::endl 
			  << "---------------------------------------" << std::endl;
	std::cout << "Type a time of day active(s): ";
	std::cin >> timeday;
	std::cout << "---------------------------------------" << std::endl;
	
	totalconsume(&velectrod,timeday);
	
	return 0;
}