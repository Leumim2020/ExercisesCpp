/*
 	Faça um programa que leia dois valores inteiros e chame uma função que receba estes 
	2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
	segunda variável. Escreva o conteúdo das 2 variáveis na tela.
*/


#include <iostream>

void larger_and_smaller_value(int* value1,int* value2);

int main(){


	int val1{},val2{};
	
	std::cout<<"Value1-> ";
	std::cin>>val1;
	std::cout<<"Value2-> ";
	std::cin>>val2;
	
	larger_and_smaller_value(&val1,&val2);
	
	std::cout<<"Larger is "<<val1<<" and smaller is "<<val2;

	return 0;
}


void larger_and_smaller_value(int *value1,int *value2){
	
	int smaller_value{};
	
	if(*value2 > *value1){
		smaller_value = *value1;
		*value1 = *value2;
		*value2 = smaller_value;		
	}
	
}
