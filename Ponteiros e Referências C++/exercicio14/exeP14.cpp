/*

Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do 
array. A função deverá preencher os elementos de array com esse valor. Não utilize
índices para percorrer o array, apenas aritmetica de ponteiros

*/

#include <iostream>
#include <vector>

using std::vector;

void store_vector(vector<char> &value1,char value2);

int main(int argc, char** argv){
	
	vector<char>name(255);
	char value_initial;
	
	std::cout<<"Std value-> ";
	std::cin>>value_initial;
	
	store_vector(name,value_initial);
	
	for(size_t i = 0;i < name.size();i++){
		if(i % 15 == 0)
			std::cout<<std::endl;
		else	
			std::cout<<*(name.data()+i)<<" ";
	}
	
	return 0;
}

void store_vector(vector<char> &value1,char value2){
	
	for(size_t i = 0;i < value1.size();i++){
		*(value1.data()+i) = value2+i;
	}
	
}
