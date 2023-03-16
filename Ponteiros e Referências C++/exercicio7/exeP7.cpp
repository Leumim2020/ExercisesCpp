/*
	 Crie um programa que contenha uma função que permita passar por parametro dois
	numeros inteiros A e B. A função deverá calcular a soma entre estes dois números e
	armazenar o resultado na variavel A. Esta função não deverá possuir retorno, mas deverá
	modificar o valor do primeiro parametro. Imprima os valores de A e B na funçãoo principal.

*/


#include <iostream>

void sum(int* val1,int* val2);

using namespace std;

int main(){

	int a{},b{};
	
	cout<<"A->";
	cin>>a;
	cout<<"B->";
	cin>>b;
	
	sum(&a,&b);
	
	cout<<a;
	
	return 0;
}

void sum(int* val1,int* val2){
	cout<<"A soma de "<<*val1<<"+"<<*val2<<"= ";
	*val1 += *val2;	
}
