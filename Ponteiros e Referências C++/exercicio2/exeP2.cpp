/*

Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços
exiba o maior endereço

*/

#include <iostream>

int main(){
	
	if(&a > &b){
		std::cout<<"The largest address is a "<<&a;
	}else{
		std::cout<<"The largest address is b "<<&b;
	}

	return 0;
}
