#include <iostream>
#include <limits>
#include <vector>
#include "validatepriceofcar.cpp"

void searchcheapcar(std::vector <CAR> *scar);

int main(int argc,char *argv[]){

	std::vector <CAR> vcar(5);	
	
	for(size_t i = 0; i < vcar.size(); ++i){
		std::cout << "Type Mark of the Car: ";
		std::cin.getline(vcar.at(i).mark,_markW);
		std::cout << "Type Year of the Car: ";
		std::cin >> vcar.at(i).year;
		std::cout << "Type Price$ of the Car: ";
		std::cin >> vcar.at(i).price;
		std::cout << "---------------------------------" << std::endl;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	std::cout << std::endl;
	searchcheapcar(&vcar);
	
	return 0;
}

