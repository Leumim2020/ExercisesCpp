/*

Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e 
determina o maior elemento do array e o número de vezes que este elemento ocorreu 
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a função deve retornar para o programa que a chamou o valor 15 e o número 3 
(indicando que o numero 15 ocorreu 3 vezes). A função deve ser do tipo void.

*/

#include <iostream>
#include <vector>

void large_value_happen(std::vector<int> &value1,short int &larger_value,short int &occurrence_t);

int main(int argc, char** argv){

	std::vector<int>value1;
	short int x{},larger_v{},occurrence_t{};
	
	std::cout<<"Type 0 for to stop the to type"<<std::endl;
	while(true){
		std::cout<<"Type value-> ";
		std::cin>>x;
		if(x != false)
			value1.push_back(x);
		else{
			large_value_happen(value1,larger_v,occurrence_t);
			break;
		}
	}


	return 0;
}


void large_value_happen(std::vector<int> &value1,short int &larger_value,short int &occurrence_t){
	
	
	for(size_t i = 0;i < value1.size();i++){
		if(*(value1.data()+i) > larger_value)
			larger_value = *(value1.data()+i);
	}
	
	if(larger_value != false){
		for(size_t i = 0;i < value1.size();i++){
			if(larger_value == *(value1.data()+i))
				occurrence_t++;
		}
	}
	
	std::cout<<"Larger value is "<<larger_value<<" and happened "<<occurrence_t<<" times";
	
}
