#include <iostream>
#include <vector>

int main(){
	
	std::vector<int> number(5);
		
	for(size_t i = 0;i < number.size();i++){
		std::cout<<"Type number-> ";
		std::cin>>*(number.data()+i);
		
		if(i == number.size()-1){
			for(size_t i = 0;i < number.size();i++){
				if(*(number.data()+i) % 2 == 0){
					std::cout<<"Value pair "<<*(number.data()+i)<<" address-> "<<(number.data()+i)<<std::endl;
				}
			}
		}
	}	
	
	return 0;
}