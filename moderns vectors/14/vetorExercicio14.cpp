#include <iostream>
#include <vector>

using namespace std;

int main(){
		
	vector<float>nums(10);
	vector<float>nums_r(10);	
	size_t nRepeated{},nFind{};

	
	for(size_t i=0;i < nums.size();i++){
		
		cout<<"Numero"<<i+1<<"->";
		cin>>nums.at(i);
		
		
		// Buscando números repetidos no vector nums
		nRepeated = 0;
		
		for(size_t j=0;j < nums.size();j++){
			
			if(nums.at(i) == nums.at(j) && i != j){
				
				nRepeated++;
				
			}
		}
		
			
		// Buscar número se nRepeated for 1 ou maior que então número se repete 
		if(nRepeated >= 1){
			
			for(size_t j = 0;j< nums.size();j++){
				
				if(nums.at(i) == nums_r.at(j)){
					nFind = 1;			
				}
				
			}

			if(nFind == 0){
				nums_r.at(i) = nums.at(i);
			}
		}
	}
	
	cout<<"Numero(s) repetido(s): ";
	for(size_t i=0;i < nums.size();i++){
		if(nums_r.at(i) != 0){
			
			cout<<nums_r.at(i)<<" ";
			
		}
	}
		
	return 0;
}
