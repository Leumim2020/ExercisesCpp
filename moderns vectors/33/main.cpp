#include <iostream>
#include <vector>

int main(int argc, char** argv) {
	
	std::vector <int> v(15);
			
	for(auto &number : v){
		std::cout << "Type number-> ";
		std::cin >> number;
	}
	
	for(auto it = v.begin(); it != v.end();){
		if(*it == 0)
			 it = v.erase(it);
		else
			++it;	
	}
	
	std::cout << std::endl << "Vector compacted-> ";	
	for(auto &it : v)
		std::cout << it << " ";
	
	return 0;
} 