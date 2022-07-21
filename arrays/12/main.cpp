/* Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.*/
#include "iostream"
#include "iomanip"

const int size = 5;
const char e = 130;// e = é

using namespace std;

int main(void){
	float array_valor[size];
	float maior,menor,media=0;
	int i;
//	 Laço de entrada do array_valor[]
	i = 0;
	while(i!=size){
		cout<<"Valor"<<i+1<<"-> ";
		cin>>array_valor[i];
		// Somando valores do array_valor[]
		media+=array_valor[i];
		i+=1;
	}
	// Achando maior valor do array_valor[]
	maior=array_valor[0];
	for(int j=0;j<size;j+=1){
		if(array_valor[j]>maior)
			maior = array_valor[j];
	}
	// Achando menor valor do array_valor[]
	menor=array_valor[4];
	for(int j=0;j<size;j+=1){
		if(array_valor[j]<menor)
			menor=array_valor[j];
	}
	// Laço de saída do array_valor[]
	cout<<"Valores lidos: ";
	for(int j=0;j<size;j+=1){
		cout<<setw(3)<<array_valor[j];
	}
	cout<<"\n";
	cout<<" Maior valor "<<e<<" "<<maior<<"\n";
	cout<<" Menor valor "<<e<<" "<<menor<<"\n";
	cout<<"M"<<e<<"dia: "<<media/size;
	
	return 0;
}
