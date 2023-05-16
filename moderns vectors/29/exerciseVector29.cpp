#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector <int> n(6);
	int sum{},qtd{};

	for (size_t i = 0; i < n.size(); ++i)
	{
		std::cout << "Type value" << i+1 << "-> ";
		std::cin >> n.at(i);

		if(n.at(i) % 2 == 0)
			sum+=n.at(i);
		else
			++qtd;
	}

	std::cout << "Number(s) par(s) typing: ";

	for (size_t i = 0; i < n.size(); ++i)
	{
		if (n.at(i) % 2 == 0)
			std::cout << n.at(i);
	}

	std::cout << std::endl <<"Sum: " << sum;
	std::cout << std::endl <<"Find " << qtd << " number(s) impar(s) typing:";
	
	for (size_t i = 0; i < n.size(); ++i)
	{
		if (n.at(i) % 2 == 1)
			std::cout << n.at(i);
	}

	return 0;
}