#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int>nums(10);
	int qtd_values_p{};
	
	for(size_t i=0;i < nums.size();i++){
		
		cout<<"Numero"<<i+1<<"-> ";
		cin>>nums.at(i);
		
		if(nums.at(i) % 2 == 0){	
			qtd_values_p++;
		}
	}
	std::cout<<"Quantidade de numeros pares: "<<qtd_values_p;
	
return 0;	
}
