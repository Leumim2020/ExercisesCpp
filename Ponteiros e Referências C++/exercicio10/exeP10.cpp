/*

	 Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada 
valor lido.

*/

#include <iostream>
#include <vector>

int main(){
	
	std::vector<int> number(5);
	
	for(size_t i = 0;i < number.size();i++){
		std::cout<<"Type number-> ";
		std::cin>>*(number.data()+i);
		std::cout<<"your double is -> ";
		std::cout<<*(number.data()+i) * 2<<std::endl;
	}
	
	return 0;
}