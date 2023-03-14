#include <iostream>
#include <conio.h>
#include <string>

void Tnomes(std::string& n){
	
	n = " Olavio";
	
}

int main(){
	
	std::string nome{"Daniel"};

	std::cout<<&nome;

		
	Tnomes(nome);
	
	std::cout<<&nome;
	
	getch();
	return 0;
}
