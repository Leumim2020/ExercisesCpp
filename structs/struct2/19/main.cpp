#include <iostream>
#include <limits>
#include <vector>
#include "mainf.cpp"

int cast(char &cvalue);

int main(){

	std::vector <PLAIN> vPplain(_aeroport);
	std::vector <AEROPORT> vAaeroport(_aeroport);

	for(size_t i = 0; i < _aeroport;){

		std::cout << std::endl; 
		std::cout << "---------------------" << std::endl;
		std::cout << "Aeroport code: ";

		vPplain.at(i).codeofaeroport = std::cin.get();

		if (cast(vPplain.at(i).codeofaeroport)){

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Plain inside code: ";
			std::cin.getline(vPplain.at(i).codeofplain_inside,_codeW);
			std::cout << "Plain outside code: ";
			std::cin.getline(vPplain.at(i).codeofplain_outside,_codeW);

		++i;
		
		}else{
			std::cout << "Information:: value typed is not valid";
			break;
		}	

	}

	for(size_t i = 0; i < _aeroport; ++i){
		std::cout << "---------------------" << std::endl;
		vAaeroport.at(i).codeofaeroport = vPplain.at(i).codeofaeroport;
		std::cout << "Aeroport code-> " << vAaeroport.at(i).codeofaeroport << std::endl;
		std::cout << "Plain inside quantity: ";
		std::cin >> vAaeroport.at(i).plainquantity_inside;
		std::cout << "Plain outside quantity: ";
		std::cin >> vAaeroport.at(i).plainquantity_outside;
	}

	return 0;
}
