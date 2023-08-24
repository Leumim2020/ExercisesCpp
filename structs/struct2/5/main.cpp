#include <iostream>
#include <array>
#define s 3

struct vetor1{
	std::array <float,s> v;
}v1;
struct vetor2{
	std::array <float,s> v;
}v2;

int main() {
	
	float sum{};
	
	for(auto &v : v1.v){;
	}
		std::cin >> v;
		std::cout << "Number v1-> "
	
	for(auto &v : v2.v){
		std::cout << "Number v2-> ";
		std::cin >> v;
	}
	
	for(size_t i = 0;i < s;++i)
		sum += (v1.v.at(i) + v2.v.at(i));
		
	std::cout << "The sum between v1 and v2 is equal: " << sum;
	
	return 0;
}