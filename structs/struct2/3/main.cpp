#include <iostream>
#include <vector>
#define length 50

struct ALUNO{
	char name[length],course[length];
	unsigned short number_of_matric{};
};

int main(int argc, char** argv) {
	
	std::vector <ALUNO> aluno(5);
	
	for(size_t i = 0;i < aluno.size(); ++i){
		std::cout << "Aluno of name: ";
		std::cin.getline(aluno.at(i).name,length);
		std::cout << "Number of matric: ";
		std::cin >> aluno.at(i).number_of_matric;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout << "Course of name: ";
		std::cin.getline(aluno.at(i).course,length);
	}
	
	std::cout << "----------------------------------------------------------------" << std::endl;
	for(size_t i = 0;i < aluno.size(); ++i){
		std::cout << "Name " << aluno.at(i).name << "\nNº " << aluno.at(i).number_of_matric << "\nCourse: " << aluno.at(i).course << std::endl
				  << "--------------------------------------------------------------" << std::endl;
	}
	
	return 0;
}