/*Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a união
entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores. Não
deve conter números repetidos.*/


#include <iostream>
#define size 20


int main(void){

	int vetor1[size]={},vetor2[size]={},vetor3[size]={};
	int repetiu, p = 9,troca;

	std::cout<<"Valores de vetor1 \n";

	for(int j=0;j < size/2;j+=1){
		std::cout<<"valor: ";
		std::cin>>vetor1[j];
	}

	std::cout<<"\n";

	std::cout<<"Valores de vetor2 \n";

	for(int j=0;j < size/2;j+=1){
		std::cout<<"valor: ";
		std::cin>>vetor2[j];
	}

	// Fazendo a união de vetor1 e vetor2 no vetor3
	std::cout<<"\n";
	std::cout<<"Vetor3 intersecacao: \n";

	// união de vetor1 no vetor3
	for(int k=0;k < size/2;k+=1){
		repetiu = 0;
		for(int j = 0; j < size; j+=1){
			if(vetor1[k] == vetor3[j])
				repetiu +=1;
		}

		if(repetiu == 0)
			vetor3[k] = vetor1[k];
		else
			continue;
	}
	
	// união de vetor2 no vetor3
	for(int k=0;k < size/2;k+=1){
		repetiu = 0;
		p+=1;
		for(int j = 0; j < size; j+=1){
			if(vetor2[k] == vetor3[j])
				repetiu +=1;
		}

		if(repetiu == 0)
			vetor3[p] = vetor2[k];
		else
			continue;
	}
	// fim da união 

	//ordenando vetor3
	for(int i = 0;i < size;i+=1){
		for(int j =i+1; j < size;j+=1){

			if(vetor3[i] > vetor3[j]){
				troca = vetor3[i];
				vetor3[i] = vetor3[j];
				vetor3[j] = troca;
			}
		}
	}


	// output vetor3
	for(int i=0; i < size; i+=1){

		if(vetor3[i] == false)
			continue;
		else
			std::cout<<vetor3[i]<<" - ";
		
		if(i % 6 == 0)
			std::cout<<"\n";
	}


	return 0;
}