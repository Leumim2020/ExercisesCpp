#include <iostream>
#include <vector>

using std::vector;

int main(){

	vector<size_t> values(6);	

	std::cout<<"Values: \n";

	for(size_t j=0;j<values.size();j++){
		
		std::cin>>values.at(j);
		
		if(j == values.size()-1){
			
			for(int i = 0;i<values.size();i++){
				
				std::cout<<"Values"<<i+1<<"-> "<<values.at(i)<<"\n";
				
			}
		}
	}

	return 0;
}
