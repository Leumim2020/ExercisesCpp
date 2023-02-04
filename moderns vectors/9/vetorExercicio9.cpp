#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<int>nums(6);
	size_t i,j;

	i = 0;
	while(i < nums.size()){
		
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if(nums.at(i) % 2 == 0){
			i++;
		}else{
			std::cout<<"Apenas pode ler numeros pares \n";
			nums.at(i) = 0;
		}
		
		if(i == nums.size()){
			
			j = nums.size()-1;
			
			std::cout<<"Ordem inversa->";
			
			while(j >= 0){
				std::cout<<" "<<nums.at(j);
				j--;
			}
		}
	}

return 0;
}
