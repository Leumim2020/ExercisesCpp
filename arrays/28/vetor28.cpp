/*Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ı́mpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/

#include <iostream>
#define size 10


void impar(int n[],int s,int &x){

	int v1[s]={};

	for(int i=0; i < s;i+=1){
		if(n[i] % 2 == 1){
			v1[i] = n[i];
			x-=1;
		}
	}

	std::cout<<"\n";
	std::cout<<"Elementos ultilizados no v1 impares: \n";
	for(int i=0; i < s; i+=1){
		if(v1[i] == 0)
			continue; // elemento contem valor nulo ou não ultilizado omitir
		else
			std::cout<<"Posicao->"<<i+1<<"\n";
	}

}

void par(int n[],int s,int &x){

	int v2[s]={};

	for(int i=0; i < s;i+=1){
		if(n[i] % 2 == 0){
			v2[i] = n[i];
			x-=1;
		}
	}

	std::cout<<"\n";
	std::cout<<"Elementos ultilizados no v2 pares: \n";
	for(int i=0; i < s; i+=1){
		if(v2[i] == 0)
			continue; // elemento contem valor nulo ou não ultilizado omitir
		else
			std::cout<<"Posicao->"<<i+1<<"\n";
	}

	
}

int main(void){

	int v[size]={},i=10,p=10;

	
	for(int i=0; i < size;i+=1){
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>v[i];
	}

	impar(v,size,i);
		std::cout<<(i == 10 ? "Nao existem numeros impares por isso nenhum elemento foi ultilizado no v1 \n" : "");

	par(v,size,p);
		std::cout<<(p == 10 ? "Nao existem numeros pares por isso nenhum elemento foi ultilizado no v2" : "");

	return 0;

}