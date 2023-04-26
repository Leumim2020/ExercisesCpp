#include <iostream>
#include <vector>

using std::vector;

int main(){

	vector<size_t>nums(10);
	size_t maior_num{},posicao_num{};
	
	for(size_t i = 0;i < nums.size();i++){
	
		std::cout<<"Numero "<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if(nums.at(i) > maior_num){
			maior_num = nums.at(i);
			posicao_num = i+1;
		}
	}
	std::cout<<"Maior numero-> "<<maior_num<<" posicao-> "<<posicao_num;

return 0;
	
}
