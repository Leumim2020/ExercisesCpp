#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<float> nums(5);
	float maior{},menor{},media{};
	
	for(size_t i=0;i < nums.size();i++){
		
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
	
		if(nums.at(i)>maior){maior = nums.at(i);}
		
		
		if(i == nums.size()-1){
			
			menor = nums.at(i);
		
			for(size_t j=0;j < nums.size();j++){
				
		
				media = media + nums.at(j);
				
				if(nums.at(j) < menor){
					menor = nums.at(j);
				}			
			}	
			media/=nums.size();		
		}		
	}
	
	std::cout<<" Maior numero e "<<maior<<"\n Menor numero e "<<menor<<"\n Media e "<<media;
	
	return 0;
}