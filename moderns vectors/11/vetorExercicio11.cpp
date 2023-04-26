#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<float>nums(10);
	float qtd_negativos{},_somaPositivos{};

	for(size_t i = 0;i < nums.size();i++){
		
		std::cout<<"Numero"<<i+1<<"-> ";
		std::cin>>nums.at(i);
		
		if(nums.at(i) < 0)
		{
			qtd_negativos++;
			
		}else{
			_somaPositivos+=nums.at(i);
		}
		
	}
	std::cout<<"Quantidade de numeros negativo "<<qtd_negativos<<"\n A soma dos numeros posiitvos e "<<_somaPositivos;
	
return 0;
	
}
