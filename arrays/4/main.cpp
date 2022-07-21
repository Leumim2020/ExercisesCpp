/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y 
quaisquer correspondentes a duas posições no vetor. Ao final seu programa 
devera escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int vetor[8],x,y,soma;
	for(int j = 0;j<8;j++){
		cout<<"Posicao "<<j<<": ";
		cin>>vetor[j];
	}
	cout<<"X: ";
	cin>>x;
	cout<<"Y: ";
	cin>>y;
	if(x >= 8 && y>=8){
		cout<<"X e Y nao correspondem as posicoes no vetor";
		cout<<" digite valores entre 0 a 8 ";
	}if(x>= 8 && y<8){
		cout<<"X nao corresponde as posicoes no vetor";
		cout<<" digite valores entre 0 a 8 ";
	}if(x<8 && y>=8){
		cout<<"Y nao corresponde as posicoes no vetor ";
		cout<<" digite valores entre 0 a 8 ";
	}else if(x<8 && y<8){
		soma = vetor[x]+vetor[y];
		cout<<"A soma das posicoes encontradas "<<vetor[x]<<" + "<<vetor[y]<<" = "<<soma;
	}
	getch();
	return 0;
}
