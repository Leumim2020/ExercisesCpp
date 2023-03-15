/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das 
componentes deste vetor, armazenando-o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.
*/
#include <iostream>
using namespace std;
int main(){
	float v1[10]={},v2[10]={};
	for(int j =0;j<10;j++){
		cout<<"Numero"<<j+1<<": ";
		cin>>v1[j];
	}
	for(int j = 0;j<10;j++){
		v2[j] = v1[j] * v1[j];
	}
	for(int j =0; j<10;j++){
		cout<<"Conjuntos "<<v1[j]<<" = "<<v2[j]<<endl;
	}
	system("pause");
	return 0;
}
