#include <iostream>
#include <vector>
#define length 50

float media(float &value,float &value2,float &value3);
void Lnote(float value,float &value2,size_t &id,unsigned short &NStudent);
void Smedia(float value,float &value2,size_t &id,unsigned short &NStudent);
bool Dpprove(float value);

struct STUDENT{
	unsigned short number_of_matric{};
	char name[length]{""};
	float first_note{},second_note{},third_note{}; 
};

int main() {
	
	std::vector <STUDENT> student(5);
	unsigned short SFLNid{},SLMid{},SSMid{};
	float SFLnote{},SLmedia{},SSMLmedia{10};
	
	for(size_t i = 0; i < student.size(); ++i){
		std::cout << "Number of student-" << i+1 << std::endl;
		student.at(i).number_of_matric = i;
		std::cout << "Name of student: ";
		std::cin.getline(student.at(i).name,length);
		std::cout << "Note one-> ";
		std::cin >> student.at(i).first_note;
		std::cout << "Note two-> ";
		std::cin >> student.at(i).second_note;
		std::cout << "Note three-> ";
		std::cin >> student.at(i).third_note;
		std::cout << "--------------------------------------------------" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		
		Lnote(student.at(i).first_note,SFLnote,i,SFLNid);
		Lnote((media(student.at(i).first_note,student.at(i).second_note,student.at(i).third_note)),
				SLmedia,i,SLMid);
		Smedia(media(student.at(i).first_note,student.at(i).second_note,student.at(i).third_note),
				SSMLmedia,i,SSMid);
	}
	
	std::cout << "Id "<< SFLNid << "-> " <<	student.at(SFLNid).name << " large note of first test-> " << SFLnote << std::endl;
	std::cout << "Id "<< SLMid << "-> " << student.at(SLMid).name << 	" large media-> " << SLmedia << std::endl;
	std::cout << "Id "<< SSMid << "-> " << student.at(SSMid).name << 	" small media-> " << SSMLmedia << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	
	for(size_t i = 0; i < student.size(); ++i){
		if(Dpprove(media(student.at(i).first_note,student.at(i).second_note,student.at(i).third_note)))
			std::cout << "Id " << i+1 << student.at(i).name << " Approve" << std::endl;
		else 
			std::cout << "Id " << i+1 << student.at(i).name << " Desapprove" << std::endl;
	}
	return 0;
}
float media(float &value,float &value2,float &value3){
	return ((value + value2 + value3) / 3);
}

void Lnote(float value,float &value2,size_t &id,unsigned short &NStudent){
	if(value > value2){
		value2 = value;
		NStudent = id;
	}
}

void Smedia(float value,float &value2,size_t &id,unsigned short &NStudent){
	if(value < value2){
		value2 = value;
		NStudent = id;
	}
}

bool Dpprove(float value){
	if(value >= 6.0)
		return 1;
	else
		return 0;	
}
//34	15	C:\Users\MONEY\Desktop\Nova pasta\structs\struct\4\main.cpp	[Error] cannot bind non-const lvalue reference of type 'float&' to an rvalue of type 'float'