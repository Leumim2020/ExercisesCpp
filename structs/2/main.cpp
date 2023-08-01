#include <iostream>
#include <conio.h>

int main() {
	
	struct cv{
  		std::string profissao;
  		unsigned short anos_experienca;
	};
	
	struct pessoa{
  		std::string nome;
  		unsigned short idade;
  		cv pessoa;
	} p1;

	p1 = {"Leo",12,"pintor",3};
	
	std::cout << p1.pessoa.anos_experienca;
	
	getch();
	return 0;
}
