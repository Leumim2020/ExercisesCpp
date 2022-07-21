/*Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
número do aluno e o segundo representando a sua altura em metros. Encontre o aluno
mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente
com suas alturas.*/

#include <iostream>
const int s = 10;

// verifica se número do aluno é 0 ou negativo ou se altura é 0 ou negativa
int validacao(int n[],float h[],int &posicao){

		if(n[posicao] == 0 & h[posicao] == 0){
			std::cout<<"Numero do aluno nao pode ser nulo ou 0 \n";
			std::cout<<" Altura do aluno nao e valida ou 0 \n";
			posicao=-1;
			// voltar a digitar valor na posição cujo não é válido
		}
		if(n[posicao] < 0 & h[posicao] < 0){
			std::cout<<" Numero do aluno nao pode ser negativo \n";
			std::cout<<" Nao existe altura negativa \n";
			posicao-=1;// voltar a digitar valor na posição cujo não é válido

		}
		if(n[posicao] > 0 & h[posicao] == 0 || n[posicao] == 0 & h[posicao] > 0){
			std::cout<<"Numero do aluno e 0 ou altura e 0 \n";
			posicao-=1;// voltar a digitar valor na posição cujo não é válido

		}
		if(n[posicao] < 0 & h[posicao] > 0 || n[posicao] > 0 & h[posicao] < 0){
			std::cout<<"Numero do aluno e negativo ou altura e negativa \n";
			posicao-=1;// voltar a digitar valor na posição cujo não é válido

		}
		
		
		return posicao;
		
}

// acha maior altura e menor altura
void maiorMenor(int n[],float h[],int size){

	
	int nAlto=0,nBaixo=0;
	int maisAlto = 0,maisBaixo = h[0];

	// achando maior altura
	for(int j=0; j < size; j+=1){
		if(maisAlto < h[j]){
			maisAlto = h[j];
			nAlto = j;
		}
	}

	// achando menor altura
	for(int i =0; i < size; i+=1){
		if(maisBaixo > h[i]){
			maisBaixo = h[i];
			nBaixo = i;
		}
	}

	std::cout<<"Numero do aluno: "<<n[nAlto]<<" e mais alto: "<<maisAlto<<" metro(s) \n";
	std::cout<<"Numero do aluno: "<<n[nBaixo]<<" e mais baixo: "<<maisBaixo<<" metro(s)";

	return;

}

int main(void){

	int numeroDoAluno[s];
	float alturaDoAluno[s];

	// lendo dez conjuntos de dois números
	for(int k=0; k < s; k+=1){
		std::cout<<"Aluno numero-> ";
		std::cin>>numeroDoAluno[k];
		std::cout<<"Altura-> ";
		std::cin>>alturaDoAluno[k];
		validacao(numeroDoAluno,alturaDoAluno,k);
	}

	std::cout<<"--------------------------------- \n";

	// Mostra o aluno com maior altura, menor altura e seus respectivos números
	maiorMenor(numeroDoAluno,alturaDoAluno,s);

	return 0;
}