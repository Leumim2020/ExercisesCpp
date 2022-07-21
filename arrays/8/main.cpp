/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos 
na ordem inversa.
*/
#include <iostream>
using namespace std;
const int tamanho = 6;
int main(void){
	int array_valor[tamanho];
	for(int j=0;j<tamanho;j++){
		cout<<"Valor"<<j+1<<": ";
		cin>>array_valor[j];
	}
	//Ordem inversa do array valores
	cout<<endl;
	cout<<"Ordem inversa do array \n";
	for(int j= tamanho-1;j>=0;j--){
		cout<<array_valor[j]<<endl;
	}
	return 0;
}
