#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<size_t>nums(6);
	
	std::cout<<"Vetor:\n";
	for(size_t i = 0;i <nums.size();i++){
		
		std::cout<<" ";
		std::cin>>nums.at(i);
		
		if(i == nums.size()-1){
			
			std::cout<<"Orderm inversa do vetor-> ";
			
			for(size_t j = nums.size()-1;j >= 0;j--){
				std::cout<<" "<<nums.at(j);
			}
		}
	}

return 0;

}
