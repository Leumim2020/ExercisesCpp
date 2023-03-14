/*

Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
 real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação

*/


#include <iostream>

int main(){

	int _ni {10};
	float _nf {20.5};
	char _nc {'n'};
	
	int* _niP = &_ni;
	float* _nfP = &_nf;
	char* _ncP	= &_nc;
	
	std::cout<<"Antes desreferenciamento: \n";
	std::cout<<_ni<<"\n";
	std::cout<<_nf<<"\n";
	std::cout<<_nc<<"\n";	
	
	*_niP = 40;
	*_nfP = 0.25;
	*_ncP = 's';
	
	std::cout<<"Apos desreferenciamento: \n";
	std::cout<<_ni<<"\n";
	std::cout<<_nf<<"\n";
	std::cout<<_nc;
		
	return 0;
}
