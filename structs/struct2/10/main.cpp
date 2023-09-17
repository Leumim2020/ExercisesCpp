#include <limits>
#include <iostream>
#include <vector>
#include <string>

struct word{
	std::string people,rua;
	int age;
};

int main(){
	
	std::vector <word> w1(2);

	for(auto i = 0; i < w1.size(); ++i){
		std::cout << "Name: ";
		std::getline(std::cin,w1.at(i).people);
		std::cout << "Street: ";
		std::getline(std::cin,w1.at(i).rua);
		std::cout << "Age: ";
		std::cin >> w1.at(i).age;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	}
	
	w1.at(0) = w1.at(1);
	
	/*for(auto i = 0; i < w1.size(); ++i){
		for(auto j = 0; j < w1.size(); ++j){
			if(w1.at(i).people.at(0) < w1.at(j).people.at(0)){
				std::string change = w1.at(i).people;
				w1.at(i).people = w1.at(j).people;
				w1.at(j).people = change;
			}
		}
	}
	*/
	std:: cout << "----------------------------------\n";
	for(auto i = 0; i < w1.size(); ++i)
		std::cout << w1.at(i).people << " " << w1.at(i).rua << " " << w1.at(i).age << " " <<std::endl;
	
	
	return 0;
}
