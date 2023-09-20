#include <iostream>
#include <limits>
#include <vector>
#define _nW 50 

struct STUDENT{
	unsigned short id{};
	char nameStudent[_nW];
	float lastMedia{}; 
};

void _ALLOWED_ANLLOWED(STUDENT &sSTUDENT,std::vector <STUDENT> &svALLOWED,std::vector <STUDENT> &svANLLOWED);

int main() {
	
	std::vector <STUDENT> student(5),ALLOWED,ANLLOWED;
	
	for(auto i = 0; i < student.size(); ++i){
		student.at(i).id = i+1;
		std::cout << "Type name of student"  << i+1 << ": ";
		std::cin.getline(student.at(i).nameStudent,_nW);
		std::cout << "Type last media: ";
		std::cin >> student.at(i).lastMedia;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		_ALLOWED_ANLLOWED(student.at(i),ALLOWED,ANLLOWED);
	}
	
	std::cout << std::endl << "----------------------------------ALLOWED" << std::endl;
	for(auto i = 0; i < ALLOWED.size(); ++i)
		std::cout << ALLOWED.at(i).id << "-Name: " << ALLOWED.at(i).nameStudent << std::endl 
				  << "Last media: " << ALLOWED.at(i).lastMedia <<std::endl; 	
	std::cout << "---------------------------------------------END_ALLOWED" << std::endl;
	
	std::cout << "---------------------------------------------ANLLOWED" << std::endl;
	for(auto i = 0; i < ANLLOWED.size(); ++i)
		std::cout << ANLLOWED.at(i).id << "-Name: " << ANLLOWED.at(i).nameStudent << std::endl 
				  << "Last media: " << ANLLOWED.at(i).lastMedia <<std::endl; 
	std::cout << "---------------------------------------------END_ANLLOWED";
	
	
	return 0;
}

void _ALLOWED_ANLLOWED(STUDENT &sSTUDENT,std::vector <STUDENT> &svALLOWED,std::vector <STUDENT> &svANLLOWED){
	
	if(sSTUDENT.lastMedia >= 5.0 )
		svALLOWED.push_back(sSTUDENT);
	else
		svANLLOWED.push_back(sSTUDENT);	
}
