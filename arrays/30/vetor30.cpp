/*Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que
estão em ambos os vetores. Não deve conter números repetidos.*/


#include <iostream>
#define size 10


void intersecacao(int x,int posicao,int s){
	
	int repetiu = 0,vetor_intersecacao[s]={};


	for(int i=0;i < s;i+=1){
		if(x == vetor_intersecacao[i])
			repetiu+=1;
	}


	if(repetiu >= 1)
	 	return;

	if(repetiu == 0){
		vetor_intersecacao[posicao] = x;
		std::cout<<vetor_intersecacao[posicao]<<"\n";
	}

}

int main(void){

	int vetor1[size]={},vetor2[size]={};
	
	std::cout<<"Valores de vetor1 \n";
	for(int j=0;j < size;j+=1){
		std::cout<<"valor: ";
		std::cin>>vetor1[j];
	}

	std::cout<<"\n";

	std::cout<<"Valores de vetor2 \n";
	for(int j=0;j < size;j+=1){
		std::cout<<"valor: ";
		std::cin>>vetor2[j];
	}

	// Fazendo a interseçação de vetor1 e vetor2

	std::cout<<"Vetor intersecacao: \n";

	for(int k=0;k < size;k+=1){
		for(int i=0;i < size;i+=1){
			if(vetor1[k] == vetor2[i]){
				intersecacao(vetor1[k],k,size);
			}
		}
	}

	return 0;
}