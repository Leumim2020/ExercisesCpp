#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<int> v_par_impar(10),v_impar;

	size_t i = 0;

	while(i < v_par_impar.size()){

		std::cout << "Type number" << i+1 << "-> ";
		std::cin >> v_par_impar.at(i);

		if( v_par_impar.at(i) >= 0 && v_par_impar.at(i) <= 50){

			
			if( v_par_impar.at(i) % 2 == 1){
				
				v_impar.push_back(v_par_impar.at(i));
			}
			++i;

		}else{

			std::cout << "Warning:  Type values must be between 0 to 50 " << std::endl;
			continue;
		}

	}

	std::cout << "First Vector: " << std::endl;
	for (size_t i = 0; i < v_par_impar.size(); ++i)
	{
		std::cout << v_par_impar.at(i) << " ";

		if( i % 2 == 1)
			std::cout << std::endl;
		
	}

	std::cout << "Second Vector: " << std::endl;
	for (size_t i = 0; i < v_impar.size(); ++i)
	{
		std::cout << v_impar.at(i) << " ";

		if( i % 2 == 1)
			std::cout << std::endl;
		
	}

	return 0;
}