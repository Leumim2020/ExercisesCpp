/*Faça um programa que leia dois números a e b (positivos menores que 10000) e:

-Crie um vetor onde cada posição é um algarismo do número. A primeira posição é
o algarismo menos significativo;

-Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores
construı́dos anteriormente.

Dica: some as posições correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 à próxima posição.
*/


#include <iostream>

int main(){

	int a,b,i;

	i=0;

	while(i < 1){

		std::cout<<"a-> ";
		std::cin>>a;
		std::cout<<"b-> ";
		std::cin>>b;

		if(a > 0 & b > 0 & a < 10000 & b < 10000)
			i++;
		else {
			std::cout<<"valor a e b devem ser positivos e menores que 10.000 \n";
			continue;
		}
	}


	return 0;
}
