#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<float> nums(8);
	size_t x{},y{};
	
	for(size_t i = 0;i < nums.size();i++){
		
		std::cout<<"Posicao"<<i+1<<"valor"<<"-> ";
		std::cin>>nums.at(i);
		
		if(i == nums.size()-1){
			std::cout<<"\nPosicao: ";
			std::cin>>x;
			std::cout<<"Posicao: ";
			std::cin>>y;
			if(x > nums.size()-1 || y > nums.size()-1){
				std::cout<<"Posicao1 ou posicao2 nao existem no vector";
			}else{
				std::cout<<"Soma de "<<nums.at(x-1)<<"+"<<nums.at(y-1)<<"= "<<nums.at(x-1)+nums.at(y-1);
			}
			
		}
	}

	return 0;
}
