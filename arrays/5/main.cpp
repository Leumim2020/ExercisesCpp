/*5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int vetor[10],par=0,vetor2[10]={};
	for(int j=0;j<10;j++){
		cout<<"Numero "<<j+1<<": ";
		cin>>vetor[j];
	}
	for(int j =0;j<10;j++){
		if(vetor[j]%2== 0){
			par++;		
			vetor2[j] = vetor[j];
		}
	}
	cout<<"Possui "<<par<<" numero(s) pare(s)"<<endl;
	cout<<"Numeros pares encontrados: "<<endl;	
	for(int i=0; i<10;i++){
		if(vetor2[i] == 0){
			continue;
		}else{
			cout<<vetor2[i]<<endl;
		}
	}
getch();
return 0;
}
