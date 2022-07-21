/*Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C*/
#include <iostream>
#define s 10

int main(void){

	int A[s]={},B[s]={},C[s];
	int i=0,j=0;

	// lendo vetor a e b
	while(i < s){
		std::cout<<"vetorA"<<i+1<<"-> ";
		std::cin>>A[i];
		std::cout<<"vetorB"<<i+1<<"-> ";
		std::cin>>B[i];
		C[i] = A[i] - B[i];
		i+=1;
	}

	std::cout<<"\n";
	// imprimindo vetor c
	while(j < s){
		std::cout<<"vetorC"<<j+1<<"-> ";
		std::cout<<C[j];
		std::cout<<std::endl;
		j+=1;
	}

return 0;
}