/*

Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do 
teclado. Em seguida, compare seus endere�os e exiba o conteudo do maior endere�o.

*/

#include <iostream>

int main(){
	
		int a{},b{};
		
		std::cout<<"Value1-> ";
		std::cin>>a;
		std::cout<<"Value2-> ";
		std::cin>>b;
		
		if(&a > &b){
			std::cout<<"The largest address is of the A and your value is -> "<<a;
		}else{
			std::cout<<"The largest address is of the B and your value is -> "<<b;
		}

	return 0;
}
