/*
	Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando ele-
mentos repetidos.
*/

#include <iostream>
#define size 20

int main(void){

	int values[size]={};
	int i,j,d=0;

	std::cout<<"Eliminar valores repetidos no array \n";
	for(int i=0;i < size;i++){
		std::cout<<"valor"<<i<<": ";
		std::cin>>values[i];
	}

	i=0;
	while(i < size){
		for( j=i+1;j < size;j++){
			if(values[i] == values[j]){
				// se valor receber 0 indica que foi eliminado
				values[i]=0;
				break;	
			}else{
				d++;
			}

		}
	i++;
}

	// exibindo array sem valores repetidos
	for(int k=0;k < size;k++){
			if(k == 0)
				std::cout<<"Valores repetidos eliminados \n";
			
			if(values[k] == false){
				continue;
			}else{
			std::cout<<values[k];
			std::cout<<"| ";
		}
	}
	if(d==45){std::cout<<" Nao existem valores repetidos no vetor";}

	return 0;
}