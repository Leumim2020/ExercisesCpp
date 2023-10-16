#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include "validatebooks.cpp"

void searchbooks(std::vector <BOOK> *bvalue,const char *book);

int main(){
	
	std::vector <BOOK> book(5); 
	char currentlytitle[_titleW];
	
	for(auto i = 0; i < book.size(); ++i){
		
		std::cout << "Title book max length(30): ";
		std::cin.getline(book.at(i).title,_titleW);
		std::cout << "Autor from book max length(15): ";
		std::cin.getline(book.at(i).autor,_autorW);
		std::cout << "Year book publication->";
		std::cin >> book.at(i).year;
		std::cout << "------------------------------------------" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	std::cout << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "Type the title about book search: ";
	std::cin.getline(currentlytitle,_titleW);
	
	searchbooks(&book,currentlytitle);
	
	return 0;
}