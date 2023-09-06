#include <string>
#include <iostream>
#include <limits>
const unsigned short _nameW{51},_jobW{31},_biW{15},_dateW{11};

struct FUNCIONARY{
	char areajob[_jobW],name[_nameW],nBI[_biW],date_nasc[_dateW],sexo[2];
	unsigned short age{},work_code{};
	float salary{};
};

int validate(char cSexo[],char cNbi[],unsigned short &uWcode,char cAjob[]);

int main(){
	
	FUNCIONARY FX;
	
	std::cout << "Type name max length(50): ";
	std::cin.getline(FX.name,_nameW);
	
	std::cout << "Type age: ";
	std::cin >> FX.age;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		
	std::cout << "Type sexo(M/F): ";
	std::cin.getline(FX.sexo,2) ;	

	std::cout << "Type BI number max length(14): ";
	std::cin.getline(FX.nBI,_biW);	
	
	std::cout << "Type birthday (DD/MM/YY): ";
	std::cin.getline(FX.date_nasc,_dateW);
	
	std::cout << "Type work code (0-99): ";
	std::cin >> FX.work_code;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	std::cout << "Type area job max length(30): ";
	std::cin.getline(FX.areajob,_jobW);
	
	std::cout << "Type salary($): ";
	std::cin >> FX.salary;

	if(validate(FX.sexo,FX.nBI,FX.work_code,FX.areajob)){
		std::cout << std::endl << "Message:: Your subscription was a sucess" << std::endl;
		std::cout << "--------------------------------------------------------------------" << std::endl;
		std::cout << "Name: " << FX.name << "\nAge: " << FX.age << "\nSexo: " << FX.sexo << "\nNº BI:" << FX.nBI
				  << "\nBirthday: " << FX.date_nasc << "\nWork code: " << FX.work_code << "\nArea Job: " << FX.areajob
				  << "\nSalary($): " << FX.salary;
	}
	else{
		std::cout << std::endl <<"Warnning:: Your subscription was not a sucess some camps you not write the correct way \n you must type conform the politics and you must see the intervals or max length";
		return 1;
	}			
}

int validate(char cSexo[],char cNbi[],unsigned short &uWcode,char cAjob[]){
	
	unsigned short i{};
	
	if(*cSexo == 'F' || *cSexo == 'M')
		i++;
	if(strlen(cNbi) == _biW-1)
		i++;
	if(uWcode >= 0 && uWcode <= 99)
		i++;
	if(strlen(cAjob) <= _jobW-1)
		i++;
	
	if(i == 4)
		return 1;
	else 
		return 0;
							
}
