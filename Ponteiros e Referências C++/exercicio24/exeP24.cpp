/*

4. Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis 
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva tambem uma função main que use essa função. 

*/


#include <iostream>
#include <vector>

void min_max(std::vector<int> &v,int *min,int *max);

int main(int argc, char** argv){

	std::vector<int> v;
	int min{},max{};
	int x{};
	
	std::cout<<"Type 0 for to stop of to read right "<<std::endl;
	while(true){
		
		std::cout<<"Value-> ";
		std::cin>>x;
		
		if(x == false){
			
			min_max(v,&min,&max);
			break;
			
		}
		else{
			
			v.push_back(x);
			
		}
	}
	
	std::cout<<"Min value of the array is "<<min<<" and max value is "<<max;

	return 0;
}

void min_max(std::vector<int> &v,int *min,int *max){
	
	*max = v.at(0);
	
	for(size_t i = 0;i < v.size();i++){
		
		if(v.at(i) > *max){
			
			*max = v.at(i);
			
		}
		
	}
	
	*min = *max;
	
	for(size_t i = 0;i < v.size();i++){
		
		if(*min > v.at(i)){
			
			*min = v.at(i);
			
		}
		
	}
	
}

