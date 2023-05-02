#include <iostream>
#include <vector>
const int s = 10;

int main(int argc, char const *argv[])
{
	std::vector <float> A(s),B(s),C;
	size_t i = 0, j = 0,k = 0;

	for(size_t i = 0; i < A.size(); ++i){

		std::cout << "Vector one value" << i+1 << "-> ";
		std::cin >> A.at(i);
	}

	std::cout << "-------------------------------------" << std::endl;

	for(size_t i = 0; i < B.size(); ++i){

		std::cout << "Vector two value" << i+1 << "-> ";
		std::cin >> B.at(i);
	}

	std::cout << "-------------------------------------" << std::endl;

	while(i < A.size()+B.size()){
		
		if( i % 2 == 0){

			C.push_back(A.at(j));
			++j;

		}else{

			C.push_back(B.at(k));
			++k;
		}

		++i;
	}
	
	std::cout << "Vector three: ";

	for (size_t i = 0; i < C.size(); ++i)
	{
		std::cout << C.at(i) << " ";

		if(i % 10 == 0 && i != 0)
			std::cout << std::endl << "              ";
	}

	return 0;
}