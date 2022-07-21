/*Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posições. Preencha um segundo vetor apenas com os números ı́mpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <iostream>
#define s 10

void impar(int valor[],int size){

	int valores_impar[size]={};

	// achando valores 	ímpares e configurando valores_impar
	for(int j=0;j < size; j+=1){
		if(valor[j] % 2 == 1){
			valores_impar[j]=valor[j];

		}
	}

	std::cout<<"\n";
	std::cout<<"Valores inteiros: \n";

	for(int i=0;i < size;i+=1){

			std::cout<<valor[i]<<" ";
			// se resto for igual a 1 quebrar linha após impressão de dois elementos 
			if(i % 2 == 1)
				std::cout<<"\n";
	}

	std::cout<<"\n";
	std::cout<<"Valores impares: \n";

	for(int i=0;i < size; i+=1){
			/*if(valores_impar[i] == false)
				continue;
			else*/
			std::cout<<valores_impar[i]<<" ";
			// se resto for igual a 1 quebrar linha após impressão de dois elementos 
			if(i % 2 == 1)
				std::cout<<"\n";
	}
}

int main(void){

	int x,valor[s]={};
	int i;

	i=0;
	while(true){

		std::cout<<"valor"<<i+1<<"-> ";
		std::cin>>x;

		if(x > 0 & x < 50){
			valor[i]=x;
			i+=1;
		}else{
			std::cout<<" Digite valor que esteja no intervalo de 0 a 50 \n";
		}
		// se i for igual a 10 array valor já foi preenchido interromper loop
		if(i==10)
			break;
	}

	impar(valor,s);

	return 0;
}