#include <ctime>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "validatecomprimisse.cpp"

std::string month(unsigned short &usmonth);
void validate_date(unsigned short &usday,unsigned short &usmonth,unsigned short &usyear);
void validate_comprimisse(std::vector <COMPRIMISSE> *vcompromisse,unsigned short &usday, unsigned short &month);

int main(int argc,char **argv){
	
	std::vector <COMPRIMISSE> comprimisse(5);
	auto i = 0;
	while(i < comprimisse.size()){
		std::cout << "Type comprimisse to make: ";
		std::cin.getline(comprimisse.at(i).comprimissename,_comprimisseW);
		std::cout << std::endl 
				  << "---------------------------" << std::endl;
		std::cout << "Type data day/month/year" << std::endl;
		std::cout << "Day: ";
		std::cin >> comprimisse.at(i).comprimissedate.day;
		std::cout << "Month: ";
		std::cin >> comprimisse.at(i).comprimissedate.month;
		std::cout << "Year: ";
		std::cin >> comprimisse.at(i).comprimissedate.year;
		std::cout << "---------------------------" << std::endl;
		
		validate_date(comprimisse.at(i).comprimissedate.day,comprimisse.at(i).comprimissedate.month,comprimisse.at(i).comprimissedate.year);
		if(comprimisse.at(i).comprimissedate.day != false  & 
		   comprimisse.at(i).comprimissedate.month != false & 
		   comprimisse.at(i).comprimissedate.year  != false){ ++i;}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	
	
	return 0;
}