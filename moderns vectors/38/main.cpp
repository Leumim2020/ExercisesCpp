#include <iostream>
#include <vector>

int main(){

	std::vector <int> v(10);

	for(int current = 0;current < v.size();++current){

		std::cout << "Value-> ";
		std::cin>>v.at(current);

			for(int previous = 0;previous < v.size();++previous){
				
				if(v.at(current) < v.at(previous) && v.at(previous)!=0){
						
						std::swap(v.at(current),v.at(previous));
				}
			}
	}
	
	std::cout << "Vector sort ascending-> ";
	for(auto &it : v)
		std::cout << it << " ";
				
    return 0;
}