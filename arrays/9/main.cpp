/*Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores 
lidos na ordem inversa.
*/
#include "iostream"
#include "conio.h"
const int size=6;

using namespace std;

int main(void){
	
	int arrayValor[size];
	int i,j,arrayPar[size]={};
	
	i=0;
	while(i!=size){
		cout<<"Valor"<<i+1<<": ";
		cin>>arrayValor[i];
		if(arrayValor[i] % 2 == 0){
			arrayPar[i]=arrayValor[i];
		}
		i++;
	}
	// Mostrar a ordem inversa do arrayPar
	cout<<"Ordem inversa do array par \n";
	j=size-1;
	while(j>=0){
		if(arrayPar[j]!=0){
			cout<<arrayPar[j]<<endl;
		}
		j--;
	}
	getch();
	return 0;
}
