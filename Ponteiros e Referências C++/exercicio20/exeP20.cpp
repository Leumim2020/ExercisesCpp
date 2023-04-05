/*
	Implemente uma função que receba como parâmetro um array de números reais de
	tamanho N e retorne quantos numeros negativos há nesse array. Essa função deve
	obedecer ao protótipo:

	int negativos(float *vet, int N)
*/

#include <iostream>
#include <vector>

void negative(std::vector<float> *vet,int N);

int main(int argc, char** argv){

	std::vector<float>numbers;
	int x{};
	
	std::cout<<"Type 0 for to stop of to read "<<std::endl;
	while(true){
		std::cout<<"Type number-> ";
		std::cin>>x;
		if(x == false){
			negative(&numbers,x);
			break;
		}
		else{
			numbers.push_back(x);
			x = 0;
		}
	}

	return 0;
}

void negative(std::vector<float> *vet,int N){
	
	for(size_t i = 0;i < vet->size();i++){
		if(*(vet.data()+i) < 0)
			N++;
	}
		std::cout<<"Number negatives are "<<N;
}
