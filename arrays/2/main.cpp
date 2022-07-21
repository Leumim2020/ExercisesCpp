/*2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/
#include <iostream>
#include <iomanip>
#define Valores 6
using namespace std;
int main(){
	int i,valores[Valores];
	for( i=0;i<Valores;i++){
		cout<<"Digite valor"<<i+1<<": ";
		cin>>valores[i];
	}
	if(i = 5){
		cout<<"Valores lidos: ";
			for(int j=0;j<Valores;j++){
			cout<<setw(5)<<valores[j];
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
