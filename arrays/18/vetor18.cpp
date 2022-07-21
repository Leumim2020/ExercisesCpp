/*Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.*/

#include <iostream>
#define s 10

void multiplo(int valor[],int x,int size){

	int j=0,q=0;

	std::cout<<"Multiplo(s) de "<<x<<"-> ";

	for(int i=0; i < size;i+=1){
		if( x % valor[i] == 0 & valor[i] != x){
			q+=1;
			std::cout<<valor[i];
			std::cout<<"- ";
		}else{
			j+=1;
		}
	}
	
	std::cout<<"Quantidade de multiplo(s) "<<q;
	std::cout<<"\n";
	std::cout<<(j == 10 ? "Nao existem multiplo(s) para o valor " : "")<<x;
}

int main(void){

	int x,v[s]={};

	for(int i=0; i < s; i+=1){
		std::cout<<"Valor"<<i+1<<"-> ";
		std::cin>>v[i];
	}

	std::cout<<"\n";
	std::cout<<"Multiplo de: ";
	std::cin>>x;

	multiplo(v,x,s);

	return 0;
}