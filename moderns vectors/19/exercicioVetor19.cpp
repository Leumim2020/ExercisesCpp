#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	
	std::vector<unsigned short> n(50);

	for(size_t i = 0; i < n.size(); ++i)
		n.at(i) = (i+(5*i))%(i+1);

	std::cout << "Vector-> ";
	for(size_t i = 0; i < n.size(); ++i){
		
		std::cout << n.at(i) << " ";
		
		if(i % 10 == 0 && i != 0)
			std::cout << std::endl << "         ";	
	}
	

	return 0;
}