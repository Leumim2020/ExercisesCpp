/*

Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na propria variável A e o dobro de B na própria variável B

*/

void sum_double(int& value1,int& value2);

#include <iostream>


int main(){

	int n1{},n2{};
	
	std::cout<<"Number->";
	std::cin>>n1;
	std::cout<<"Number->";
	std::cin>>n2;
	
	sum_double(n1,n2);
	
	return 0;
}

void sum_double(int& value1,int& value2){
	
	std::cout<<"O dobro de "<<value1<<" e ";
	value1 *= 2;
	std::cout<<value1<<"\n";
	
	std::cout<<"O dobro de "<<value2<<" e ";
	value2 *= 2;
	std::cout<<value2<<"\n";
	
	std::cout<<"A soma de "<<value1<<" + "<<value2<<"= "<<value1+value2; 	
	
}
