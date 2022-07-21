/*Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
valores negativos.*/
#include <iostream>
#define s 10

int main(void){
	int value[s];

	for(int i=0;i < s; i+=1){
		std::cout<<"valor"<<i<<"-> ";
		std::cin>>value[i];
	}
	for(int k=0;k < s;k+=1){
		if(value[k]<0){
			value[k]=0;
		}
		std::cout<<"\n";
		std::cout<<"Posicao"<<k<<"-> ";
		std::cout<<value[k];

	}
	return 0;
}