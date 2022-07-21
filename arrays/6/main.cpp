/*Faça um programa que receba do usuario um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/

#include <iostream>
using namespace std;
int main(){
	int vetor[10];
	int maior,menor;
	for(int i = 0;i<10;i++){
		cout<<"Posicao"<<i<<": ";
		cin>>vetor[i];
	}
	maior = vetor[0];
	menor = vetor[0];
	for(int j =1;j<10;j++){
		if(vetor[j]>maior){
			maior = vetor[j];
		}
		if(menor>vetor[j]){
			menor = vetor[j];
		}
	}
	cout<<"O maior elemento do array e "<<maior<<endl;
	cout<<"O menor elemento do array e "<<menor;
	return 0;
	
}

