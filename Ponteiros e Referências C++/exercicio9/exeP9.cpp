/*
	Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.

*/

#include <iostream>
const short s = 3;

int main(){
	
	float number[s][s];
	
	for(int i = 0;i < s;i++){
		
		for(int j = 0;j < s;j++){
		
			std::cout<<&(number[i][j])<<" ";
	
		}
		std::cout<<"\n";
	}
	
	return 0;	
}