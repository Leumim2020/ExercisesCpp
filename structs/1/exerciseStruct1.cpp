#include <iostream>
#include <ios>
#include <limits>
#include <string>

struct person {
	std::string nome[2];
	int idade [2];	
}p1;

int main(){

	for(int i = 0; i < 2; ++i){
		std::cout << "Name" << i+1 << "-> ";
		std::getline(std::cin,p1.nome[i]);
		std::cout << "Age" << i+1 << "-> ";	
		std::cin >> p1.idade[i];
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');	
		std::cout << std::endl;
	
	}
	
	for(int i = 0;i < 2; ++i)
		std::cout << "Person" << i+1 << "-> " << p1.nome[i] << " age " << p1.idade[i] << std::endl;
		
	return 0;	
}