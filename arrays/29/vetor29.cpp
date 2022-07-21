/*Faça um programa que receba 6 números inteiros e mostre:
• Os números pares digitados;
• A soma dos números pares digitados;
• Os números ı́mpares digitados;
• A quantidade de números ı́mpares digitados;*/

#include <iostream>
#define s 6

int main(void){

	int valor[s]={},spar=0,simpar=0;

	for(int i=0;i < s;i+=1){
		std::cout<<"valor"<<i+1<<"-> ";
		std::cin>>valor[i];
	}

	for(int j=0; j < s; j+=1){
		if(valor[j] % 2 == 0){
			spar+=valor[j];
			std::cout<<"Numero(s) pares: "<<valor[j]<<"\n";
		}
	}

	std::cout<<"Soma dos numeros pares e: "<<spar;
	std::cout<<"\n \n";
	
	for(int j=0; j < s; j+=1){
		if(valor[j] % 2 == 1){
			simpar+=valor[j];
			std::cout<<"Numero(s) impares: "<<valor[j]<<"\n";
		}
	}
	std::cout<<"Soma dos numeros impares e: "<<simpar;


	return 0;
}