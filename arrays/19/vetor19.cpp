/*Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ∗ i)%(i + 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

#include <iostream>
#define s 50

int main(void){
	int valor[s];

	for(int i =0;i < s;i+=1){
		valor[i]=((i+5*i)%(i+1));
		std::cout<<"valor"<<i+1<<"-> "<<valor[i];
		std::cout<<"\n";
	}

	return 0;
}