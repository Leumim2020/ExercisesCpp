#include <iostream>
#include <vector>

#define null 0

using std::vector;

int main(){
	
	vector<int>nums(10);
	
	
	for(size_t i = 0;i <= nums.size()-1;i++){
		
		std::cout<<"Number"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if( i == nums.size()-1){
			
			for(size_t i = 0; i < nums.size();i++){
				
				
				for(size_t j = 0; j < nums.size();j++){
					
					if( nums.at(i) == nums.at(j) && i != j){
					
						 nums.at(j) = null;				
					}
					
				}
				
			}
		}
	}
	
	for(size_t i = 0; i < nums.size();i++){
		
		if(nums.at(i) == null){
			nums.erase(nums.begin()+i);
		}else{
			std::cout<<nums.at(i)<<" ";
		}
	}
	
	
	return 0;
}
