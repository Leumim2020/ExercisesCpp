#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	
	std::vector <float> n(10);
	float val{};
	auto it = n.begin();
	
	while(it != n.end()){
		std::cout << "Type number->";
		std::cin >> val; 
		if(std::count(n.begin(),n.end(),val)){
			std::cout << "warning:: number found" << std::endl;
		}else{
			*it = val;
			++it;
		}
	}
	
	for(auto it : n)
		std::cout << it << " ";
		
	return 0;
}
