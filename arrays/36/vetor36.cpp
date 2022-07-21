/*Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final escreva
os elementos do vetor ordenado.*/

#include <iostream>
#define size 10

int main(){

	float number[size]={};

	for(int j = 0;j < size;j++){
		std::cout<<"Numero-> ";
		std::cin>>number[j];
	}

	std::cout<<"Vetor ordenado: ";

	int k;
	for(int j = 0;j < size;j++){
		for( k = j+1;k < size;k++){
			int order;
			if(number[j] > number[k]){
				order = number[j];
				number[j] = number[k];
				number[k] = order;
			}
		}
		std::cout<<number[j]<<" ";
	}

	return 0;
}
