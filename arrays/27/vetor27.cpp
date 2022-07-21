/*Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
que são primos e suas respectivas posições no vetor.*/

#include <iostream>
#define size 10


void primo(int valor,int s,int p,int &n){
	
	int nprimo[s]={};
	int nDivisor;

	for(int j=0; j < valor/valor; j+=1){
		nDivisor = 0;
		for(int i = 1; i <= valor; i+=1){
			if( valor % i == 0)
				nDivisor+=1;
		}

		// se nDivisor for 2 é um número primo pois número primo é divisível apenas por ele e 1 
		if( nDivisor == 2)
			nprimo[j] = valor;

		if( nDivisor >= 3)
			n+=1;
	}

	for(int i=0; i < s; i+=1){
		if(nprimo[i] == false) 
			continue;// omitir posições com valor 0
		else
			std::cout<<"Posicao"<<p+1<<"-> "<<nprimo[i]<<"\n";
	}

}


int main(void){

	int valor[size]={},x=0;

	// input números
	for(int i=0; i < size; i+=1){
		std::cout<<"Valor"<<i+1<<"-> ";
		std::cin>>valor[i];
	}


	std::cout<<"\n";
	std::cout<<"Numeros primos: \n";

	for(int i=0; i < size; i+=1){
		primo(valor[i],size,i,x);
	}

	std::cout<<(x == 10 || x == 9 ? "Nao existem numeros primos" : "");
	

	return 0;
}