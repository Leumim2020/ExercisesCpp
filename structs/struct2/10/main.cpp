#include <iostream>
#include <vector>
#include <string>

struct PEOPLE{
	std::string name,address,phonenumber;
}aux;

bool validate(PEOPLE &PLP);

int main(){
	
	std::vector <PEOPLE> p(5);

	for(auto i = 0; i < p.size();){
		std::cout << "\nName: ";
		std::getline(std::cin,p.at(i).name);
		std::cout << "Address: ";
		std::getline(std::cin,p.at(i).address);
		std::cout << "Phone number(+244): ";
		std::getline(std::cin,p.at(i).phonenumber);
		
		if(validate(p.at(i))){++i;}
		else{
			std::cout << std::endl << "--------------------------------------------------------------";
			std::cout << std::endl << "Warnning::You not typed data the correct way (max_length)" << std::endl 
								   << "           breaked Name(50), Address(20), Phone(9) " << std::endl;
			std::cout << "--------------------------------------------------------------" << std::endl;
		}
	}
	
	for(auto i = 0; i < p.size(); ++i){
		for(auto j = 0; j < p.size(); ++j){
			if(p.at(i).name.at(0) < p.at(j).name.at(0)){
				aux = p.at(i);
				p.at(i) = p.at(j);
				p.at(j) = aux;
			}
		}
	}
	
	std:: cout << "----------------------------------\n";
	for(auto i = 0; i < p.size(); ++i){
		std::cout << "Name: " << p.at(i).name << " Address: " << p.at(i).address << " Phone Number: (+244) " 
											 << p.at(i).phonenumber << std::endl;
	}
	
	return 0;
}

bool validate(PEOPLE &PLP){	
	
	if(PLP.name.length() > 50 || PLP.address.length() > 20 || PLP.phonenumber.length() > 9)
		return 0;
	else
		return 1;
}
