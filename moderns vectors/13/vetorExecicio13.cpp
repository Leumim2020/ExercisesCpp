#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<float> nums(5);
	float maior{},menor{};
	int position_maior{},position_menor{};
	
	for(size_t i=0;i< nums.size();i++){
		
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		
		if(nums.at(i) > maior){
			maior = nums.at(i);
			position_maior = i+1;
		}
		
		if(i == nums.size()-1){
			
			menor = nums.at(i);
		
			for(size_t j=0;j < nums.size();j++){
						
				if(nums.at(j) < menor){
					menor = nums.at(j);
					position_menor = j+1;
				}			
			}			
		}		
	}
	
	std::cout<<" Posicao do maior numero->"<<position_maior<<"\n Posicao do menor numero->"<<position_menor;

	return 0;
}
