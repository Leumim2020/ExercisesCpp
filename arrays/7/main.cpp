/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima 
o vetor, o maior elemento e a posição que ele se encontra.*/
#include<iostream>
#include<iomanip>
#define dez 10
using namespace std;
int main(){
	int dezn[dez];
	int maior,posicao = 0;
	for(int j=0;j<dez;j++){
		cout<<"Numero"<<j<<": ";
		cin>>dezn[j];
	}
	maior = dezn[0];
	for(int j=1;j<dez;j++){
		if(dezn[j]>maior){
			maior = dezn[j];
			posicao = j;
		}
	}
	cout<<"Vetor"<<endl;
	cout<<"-----"<<endl;
	for(int j = 0;j<dez;j++){
		cout<<dezn[j]<<endl;
	}
	cout<<"-----";
	cout<<endl;
	cout<<"Maior elemento: "<<maior<<endl;
	cout<<"Posicao-"<<posicao;
	return 0;
}
