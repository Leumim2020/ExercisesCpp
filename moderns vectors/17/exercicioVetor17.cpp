#include <iostream>
#include <vector>

int main(){

	std::vector<int> n(10);

	for(size_t i = 0; i < n.size(); ++i){
		
		std::cout << "Type number" << i+1 << "-> ";
		std::cin>>n.at(i);

		if(n.at(i) < 0)
			n.at(i) = 0;
	}

	std::cout << "New vector: ";

	for (size_t i = 0; i < n.size(); ++i)
	{
		std::cout << n.at(i) << " ";
	}
	
	return 0;
}