#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	const int size_v{5};
	std::vector<float> v1(size_v),v2(size_v);
	float product_scalar{};

	for(size_t i = 0;i < size_v; ++i){
		std::cout << "Vector one type value" << i+1 << "-> ";
		std::cin >> v1.at(i);
	}

	std::cout << "----------------------------" << std::endl;

	for(size_t i = 0;i < size_v; ++i){
		std::cout << "Vector two type value" << i+1 << "-> ";
		std::cin >> v2.at(i);
	}

	// calculate product scalar
	for (size_t i = 0; i < size_v; ++i)
	{
		product_scalar += (v1.at(i) * v2.at(i));
	}

	std::cout << "Vector one values: ";
	for (size_t i = 0; i < size_v; ++i)
	{
		std::cout << v1.at(i) << " ";
	}

	std::cout << std::endl << "Vector two values: ";
	for (size_t i = 0; i < size_v; ++i)
	{
		std::cout << v2.at(i) << " ";
	}
	std::cout << std::endl << "Product scalar between vector one and vector is " << product_scalar;

	return 0;
}