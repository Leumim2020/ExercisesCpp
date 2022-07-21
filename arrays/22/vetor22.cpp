/*Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,
nas posições pares os valores do primeiro e nas posições impares os valores do se-
gundo.*/

#include <iostream>
#define s 10

int main(void){

	int A[s]={},B[s]={},C[s*2]={};
	int i=0,j=0,k=0;

	// lendo vetor a e b
	std::cout<<"Primeiro vetor \n";
	for(int i=0;i < s;i+=1){
		std::cout<<"valor"<<i+1<<"-> ";
		std::cin>>A[i];
	}

	std::cout<<"\n";
	std::cout<<"Segundo vetor \n";

	for(int i=0; i < s;i+=1){
		std::cout<<"valor"<<i+1<<"-> ";
		std::cin>>B[i];
	}

	//fim da leitura

	while(i < s*2){
		if(i % 2 == 0){
			// atribuindo valores do vetorA nas posições pares
			C[i] = A[j];
			j+=1;
		}else{
			// atribuindo valores do vetorA nas posições impares
			C[i] = B[k];
			k+=1;
		}
		i+=1;
	}

	std::cout<<"\n";
	// imprimindo vetor c
	for(int j=0;j < s*2;j+=1){
		std::cout<<"Posicao"<<j<<"-> ";
		std::cout<<C[j];
		std::cout<<std::endl;
	}

return 0;
}