#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
	std::array <int,10> A,B,C;

	for(size_t i = 0; i < A.size(); ++i){

		std::cout << "Vector A value" << i+1 << "-> ";
		std::cin >> A.at(i);
	}

	std::cout << "-------------------------------------" << std::endl;

	for(size_t i = 0; i < B.size(); ++i){

		std::cout << "Vector B value" << i+1 << "-> ";
		std::cin >> B.at(i);
	}

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Vector C result from A - B: ";

	for(size_t i = 0; i < C.size(); ++i){

		C.at(i) = A.at(i) - B.at(i);
		std::cout << C.at(i) << " ";
	}

	return 0;
}