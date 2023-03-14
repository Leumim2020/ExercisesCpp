#include <iostream>


struct pessoa{
	const std::string nome{"Leumim"};
};

int main(){

	pessoa p1;
	
	const std::string* const n = &p1.nome;
	
	std::cout<<*n<<" | "<< &p1.nome;
	
	return 0;    
}
	