#include <cmath>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	float media{},somatorio{},desvio_padrao{};
	std::vector <float> n(10);

	for (size_t i = 0; i < n.size(); ++i)
	{
		std::cout << "Type number" << i+1 << "-> ";
		std::cin >> n.at(i);
		media += n.at(i);
	}

	media /= n.size();

	for (size_t i = 0; i < n.size(); ++i)
	{
		somatorio += pow((n.at(i)-media),2);
	}

	desvio_padrao = sqrtf(somatorio/(n.size()-1));

	std::cout << "O desvio padrao e " << desvio_padrao;

	return 0;
}