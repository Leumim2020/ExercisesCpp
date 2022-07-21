/*Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o
produto escalar, sendo que o produto escalar é dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn */

#include <iostream>
#define s 5
using namespace std;
int main(void){

	
	int y[s];
	int x[s];
	int pd=0,p[5];
	
	for(int j=0; j < s;j+=1){
		cout<<"A"<<j+1<<"-> ";
		cin>>y[j];
		cout<<"B"<<j+1<<"-> ";
		cin>>x[j];
		p[j] = y[j] * x[j];
		pd+=p[j];
	}
	cout<<"Produto escalar de x e y "<<pd;


	return 0;
}