#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<size_t>nums(10);
	size_t qtd_par{};
	
	for(size_t i=0;i < nums.size();i++){
		
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if(nums.at(i) % 2 == 0){	
			qtd_par++;
		}
	}
	std::cout<<"Quantidade de numeros pares: "<<qtd_par;
	
return 0;	
}
