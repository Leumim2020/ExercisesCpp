#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector <int> v(10),v_impar,v_par;

	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << "Type number" << i+1 << "-> ";
		std::cin >> v.at(i);

		if(v.at(i) % 2 == 0)
			v_par.push_back(v.at(i));
		else
			v_impar.push_back(v.at(i));
	}

	std::cout << "Number(s) par(s): ";

	for (size_t i = 0; i < v_par.size(); ++i)
	{
		std::cout << " " <<v_par.at(i);
	}

	std::cout << std::endl << "Number(s) impar(s): ";

	for (size_t i = 0; i < v_impar.size(); ++i)
	{
		std::cout << " " <<v_impar.at(i);
	}

	return 0;
}