#include <algorithm>
#include <iostream>
#include <vector>

int main() {

	std::vector <float> v(11);
	
	for(auto &it : v){
		std::cout << "Number-> ";
		std::cin >> it;
	}	
	
	std::sort(v.begin(),v.begin()+6);
	std::sort(v.begin()+6,v.begin()+v.size(),std::greater<float>());
	
	for(auto &it : v)
		std::cout << " " << it; 	
	
	return 0;
}