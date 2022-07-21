/* Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/
#include "iostream"
const int tamanho = 5;
const char a = 160;// a = á
const char at = 132;// a = ã
const char c = 135;// c = ç

using namespace std;

int main(void){
	
	float arrayValor[tamanho];
	float p_maior,p_menor;
	// Laçao de entrada do arrayValor[]
	for(int i=0;i!=tamanho;i+=1){
		cout<<"Digite posi"<<c<<at<<"o"<<i<<"-> ";
		cin>>arrayValor[i];
	}
	// Achando a posição do maior valor do arrayValor[]
	p_maior = 0;
	for(int i=0;i!=tamanho;i+=1){
		if(arrayValor[i]>p_maior)
			p_maior = i;
	}
		// Achando a posição do menor valor do arrayValor[]
	p_menor = 0;
	for(int i=0;i!=tamanho;i+=1){
		if(arrayValor[i]<p_menor)
			p_menor = i;
	}
	
	cout<<"O maior valor est"<<a<<" na posi"<<c<<at<<"o-"<<p_maior;
	cout<<endl;
	cout<<"O menor valor est"<<a<<" na posi"<<c<<at<<"o-"<<p_menor;
	
	return 0;
}
