#include <algorithm>
#include <ctime>
#include <iostream>
#include <string>
#include "validate.cpp"

std::string month(unsigned short &usmonth);
void validateBirthday(unsigned short &usday,unsigned short &usmonth,unsigned short &year);
void validateEmail_Nif(std::string &semail,std::string &snif);

int main(){
	
	PERSON Me;
	
	std::cout << "Type name-> ";
	std::getline(std::cin,Me.name);
	std::cout << "Type country->";
	std::getline(std::cin,Me.country);
	std::cout << "-------------------------" << std::endl;
	std::cout << "Birthday day/month/year" << std::endl;
	std::cout << "Type year->"; 
	std::cin >> Me.year;
	std::cout << "Type month->";
	std::cin >> Me.month;
	std::cout << "Type day->";
	std::cin >> Me.day;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Type city->";
	std::cin >> Me.city;
	std::cout << "Type nif->";
	std::cin >> Me.nif;
	std::cout << "Type email xxxxxxxxxx@gmail.com-> ";
	std::cin >> Me.email;
	
	validateBirthday(Me.day,Me.month,Me.year);
	validateEmail_Nif(Me.email,Me.nif);
	
	std::cout << std::endl << "-------------------------" << std::endl;
	std::cout << std::endl << "Name: " << Me.name << std::endl << "Birthday: "<< Me.day << "/" << Me.month << "/" << Me.year;	
	std::cout << std::endl << "City: " << Me.city << std::endl << "NIF: " << Me.nif << std::endl << "Email: " << Me.email;
	std::cout << std::endl;
	
	system("pause");
	return 0;	
}