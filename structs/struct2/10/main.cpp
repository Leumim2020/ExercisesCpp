#include <iostream>
#include <vector>
const unsigned short  _nw = 51,_addw = 21,_phnw = 10;

struct PEOPLE{
	char name[_nw],address[_addw],phoneNumber[_phnw];	
};

int main() {
	
	std::vector <PEOPLE> p(5);
	
	for(auto i = 0; i < 5 ; ++i){
		std::cout << "Type name: ";
		std::cin.getline(p.at(i).name,_nw);
		std::cout << "Type address: ";
		std::cin.getline(p.at(i).address,_addw);
		std::cout << "Type phone number:(+244) ";
		std::cin.getline(p.at(i).phoneNumber,_phnw);
	}
	
	
	
	return 0;
}