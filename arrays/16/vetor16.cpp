/*Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
escreva uma mensagem informando que o código é inválido.*/

#include <iostream>
#define s 5

// ordenando o array em ordem crescente
void direta(float a[]){
	int maior,i;
	std::cout<<"Ordem direta: ";
		for(int k=0;k < s; k+=1){
			for(i = k+1;i < s;i+=1){
				if(a[k] > a[i]){
					maior = a[k];
					a[k] = a[i];
					a[i] = maior;
				}
			}
			std::cout<<a[k]<<" ";
		}
}
// ordenando o array em ordem decrescente
void inversa(float a[]){
	int menor,i;
	std::cout<<"Ordem inversa: ";
		for(int k=0;k < s; k+=1){
			for(i = k+1;i < s;i+=1){
				if(a[k] < a[i]){
					menor = a[k];
					a[k] = a[i];
					a[i] = menor;
				}
			}
			std::cout<<a[k]<<" ";
		}
}

int main(void){
	float value[s]={};
	int n;

	for(int j=0;j < s;j+=1){
		std::cout<<"Valor"<<j<<"-> ";
		std::cin>>value[j];
	}

	while(true){
		std::cout<<"\n";
		std::cout<<"Digite codigo: ";
		std::cin>>n;
		// se valor digitado for 0 programa fecha
		if(n==0){return 0;}
		if(n==1){direta(value);}
		if(n==2){inversa(value);}
		if(n!=1 && n!=2){std::cout<<"Codigo invalido";}
	}

return 0;
}