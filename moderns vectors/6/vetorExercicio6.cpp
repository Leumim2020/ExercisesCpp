#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<size_t>nums(10);
	size_t maior{},menor{};
	
	for(size_t i=0;i < nums.size();i++){
			
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if(nums.at(i) > maior){
			maior = nums.at(i);
		}
	
		if (i == nums.size()-1){
			menor = nums.at(i-1);
			for(size_t j = 0;j < nums.size();j++){
			
				if( nums.at(j) < menor){
					menor = nums.at(j);
				}
	
			}		
		}
	
	}
	std::cout<<"Maior: "<<maior;
	std::cout<<"\nMenor: "<<menor;

return 0;
}
