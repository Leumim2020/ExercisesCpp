#include <iostream>
#include <vector>

int main(){

	std::vector<int> n(10);
	int x;
	unsigned short qt_number_multiple{};

	for (size_t i = 0; i < n.size(); ++i)
	{
		std::cout << "Type number" << i+1 << "-> ";
		std::cin >> n.at(i);
	}

	std::cout <<std::endl <<"Type any number and know your multiples: ";
	std::cin >> x;

	for(size_t i = 0; i < n.size(); ++i){

		if(x % n.at(i) == 0 && x != n.at(i)){

			qt_number_multiple++;
			std::cout << n.at(i) << " "; 
		
		}
	}

	std::cout << std::endl;

	if(qt_number_multiple == 0)	
			std::cout << x << " don't have multiples";
		

	return 0;
}