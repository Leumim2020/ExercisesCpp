#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector <unsigned short> n;
	unsigned short i;

	i = 0;
	while(true){

		if ((i + 3) % 10 == 0)
		{
			i++;
		}else
		{
			n.push_back(i);
			i++;
		}

		if( n.size() == 100)
			break;
	} 

	std::cout << "Vector: ";
	for (size_t j = 0; j < n.size(); ++j)
	{
		std::cout << n.at(j) << " ";

		if( j % 10 == 0 && j != 0)
			std::cout << std::endl << "        ";
	}

	return 0;
}