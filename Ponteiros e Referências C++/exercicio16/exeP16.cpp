/*

Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a 
variável a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo.

*/

#include <iostream>

int main(int argc, char** argv){

	int a;
	int *b;
	int **c;
	int ***d;
	
	std::cout<<"Type number-> ";
	std::cin>>a;
	
	b = &a;
	c = &b;
	d = &c;
	
	std::cout<<"Double of "<<*b<<"= "<<(*b)*2<<std::endl;
	std::cout<<"Triple of "<<**c<<"= "<<(**c)*3<<std::endl;
	std::cout<<"Quadruple of "<<***d<<"= "<<(***d)*4;
	
	return 0;
}
