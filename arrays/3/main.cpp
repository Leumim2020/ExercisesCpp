/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das 
componentes deste vetor, armazenando-o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.
*/
#include <iostream>
using namespace std;
int main(){
	float conjunto[10]={},conjunt[10]={};
	for(int j =0;j<10;j++){//Lendo números
		cout<<"Numero"<<j+1<<": ";
		cin>>conjunto[j];
	}
	for(int j = 0;j<10;j++){//Calculando quadrado e armazenando o resultado no array
		conjunt[j] = conjunto[j] * conjunto[j];
	}
	for(int j =0; j<10;j++){
		cout<<"Conjuntos "<<conjunto[j]<<" = "<<conjunt[j]<<endl;
	}
	system("pause");
	return 0;
}
