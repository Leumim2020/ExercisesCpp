#include <iostream>
#include <vector>

int main(){
	
	const int s{10};
	short nrepeat;
	std::vector <float> v1(s),v2(s),v3(s);
	
	std::cout << "Vector one " << std::endl;
	for(size_t i = 0; i < s;++i){
		std::cout << "Type value" << i+1 << "-> ";
		std::cin >> v1.at(i);
	}
	
	std::cout << "Vector two " << std::endl;
	for(size_t i = 0; i < s;++i){
		std::cout << "Type value" << i+1 << "-> ";
		std::cin >> v2.at(i);
	}
	
	std::cout << "Vector three " << std::endl;
	for(size_t i = 0; i < s;++i){
		for(size_t j = 0; j < s;++j){
			if(v1.at(i) == v2.at(j)){
				nrepeat = 0;
				for(size_t k = 0; k < s; ++k){
					if(v1.at(i) == v3.at(k))
						nrepeat++;
				}
				if(nrepeat == 0)
					v3.at(i) = v1.at(i);
			}
		}
		std::cout << v3.at(i) << " ";
	}
	
	return 0;
}
