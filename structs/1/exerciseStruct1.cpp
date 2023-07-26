#include <iostream>
#include <string>
#define size 2

struct person {
	std::string name[size];
	unsigned short age[size];	
}p1;

int main(){

	for(unsigned i = 0; i < size; ++i){
		std::cout << "Name" << i+1 << "-> ";
		std::getline(std::cin,p1.name[i]);
		std::cout << "Age" << i+1 << "-> ";	
		std::cin >> p1.age[i];
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');	
	}
	
	for(unsigned i = 0;i < size; ++i)
		std::cout << "Person" << i+1 << "-> " << p1.name[i] << " age " << p1.age[i] << std::endl;
		
	return 0;	
}
