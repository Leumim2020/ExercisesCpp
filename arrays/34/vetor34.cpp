/*Faça um programa para ler 10 números DIFERENTES a serem armazenados em um
vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa
deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário
deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram
fornecidos. Exibir na tela o vetor final que foi digitado.*/


#include <iostream>
#define size 10

int main(){

	int value,array_value[size]={},i;

	i=0;
	while(i < size){

		int value_found = 0;

		std::cout<<"Valor"<<i+1<<"-> ";
		std::cin>>value;

		// verificar se o valor digitado pelo usuário existe no array_value
		for(int j = 0;j < size;j++){
			if(value == array_value[j])
				value_found+=1;
		}
		// se após verficação valor não encontrado ou value_found for 0
		if(value_found == false){
			array_value[i] = value;
			i++;
		}else{
			std::cout<<"Valor repetiu digitar outro numero \n";
			continue;
		}
	}

	std::cout<<"Vetor final: ";
	for(int j = 0;j < size;j++)
		std::cout<<array_value[j]<<" ";


	return 0;
}
