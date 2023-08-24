#include <iostream>
#include <limits>
#include <array>
const unsigned short _s{3},_nameW{50};

struct STUDENT{
	unsigned short Sid{};
	char name[_nameW],Cdiscipline{};
	std::array <float,_s> Vnote{};
};

int main() {
	
	std::array <STUDENT,_s> student;
	float p1{.1},p2{.2};
	
	for(size_t i = 0; i < student.size(); ++i){
		student.at(i).Sid = i+1;
		std::cout << "Name of student" << i+1 << ": ";
		std::cin.getline(student.at(i).name,_nameW);
		std::cout << "Code discipline: ";
		std::cin >> student.at(i).Cdiscipline;
		std::cout << "Note1: ";
		std::cin >> student.at(i).Vnote.at(i-i); 
		std::cout << "Note2: ";
		if(i == 0){// evitando execessão 0/0 
			std::cin >> student.at(i).Vnote.at(1);
			student.at(i).Vnote.at(2) = ((student.at(i).Vnote.at(i-i) * p1) + (student.at(i).Vnote.at(1) * p2)) / (p1+p2);
		} 
		else {
			std::cin >> student.at(i).Vnote.at(i/i);
			student.at(i).Vnote.at((i/i)+(i/i)) = ((student.at(i).Vnote.at(i-i) * p1) + (student.at(i).Vnote.at(i/i) * p2)) / (p1+p2);
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');	
	}
	
	for(size_t i = 0; i < student.size(); ++i)
		std::cout << "Name of student: " << student.at(i).name << " | Media: " << student.at(i).Vnote.at(2) << "\n";
		
	
	return 0;
}