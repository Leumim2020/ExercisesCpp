#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector <int> n(10);
	int primo;

	for (size_t i = 0; i < n.size(); ++i)
	{
		std::cout << "Type number" << i+1 << "-> ";
		std::cin >> n.at(i);
	}


	std::cout << "Number(s) primo(s) find are: " << std::endl;

	for (size_t i = 0; i < n.size(); ++i)
	{	
		primo = 0;

		for (size_t j = 1; j <= n.at(i); ++j)
		{
			if(n.at(i) % j == 0)
				++primo;
			
		}

		if(primo == 2)
			std::cout << "Position" << i+1 << "->" << n.at(i) << std::endl;
	}

	return 0;
}
	