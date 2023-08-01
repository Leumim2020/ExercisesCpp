#include <iostream>
#define length 50

	struct person{
		char name[length],address[length];
		unsigned short age{};		
	};

int main(int argc, char** argv) {
	
	person p1;
	
	std::cout << "Type name: ";
	std::cin.getline(p1.name,length);
	std::cout << "Type age: ";
	std::cin >> p1.age;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << "Type address: ";
	std::cin.getline(p1.address,length);
	
	std::cout << "Name is " << p1.name << " age " << p1.age << " years " << std::endl << "Address: " << p1.address; 
	
	return 0;
}