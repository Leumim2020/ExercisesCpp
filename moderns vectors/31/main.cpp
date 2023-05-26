#include <iostream>
#include <vector>

void union_vector(std::vector <float> &first_vector,std::vector <float> &second_vector,std::vector <float> &third_vector);

int main() {
	
	const int s{10};
	std::vector <float> v1(s),v2(s),v3;
	
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
	
	union_vector(v1,v2,v3);
	
	for(auto it : v3){
		std::cout << it << " ";
	}

	return 0;
}


void union_vector(std::vector <float> &first_vector,std::vector <float> &second_vector,std::vector <float> &third_vector){
	//------------------------------------------------------------- zeroing each vector with nulls number 
	for(size_t i = 0; i < first_vector.size(); ++i){
		for(size_t j = 0; j < second_vector.size(); ++j){	
			if(first_vector.at(i) == first_vector.at(j) && i != j)
				first_vector.at(j) = 0;
					
			if(second_vector.at(i) == second_vector.at(j) && i != j)
				second_vector.at(j) = 0;		
		}
	}
	//------------------------------------------------------------- zeroing vector with nulls number
	for(size_t i = 0; i < first_vector.size(); ++i){
		for(size_t j = 0; j < second_vector.size(); ++j){
			if(first_vector.at(i) == second_vector.at(j))
				second_vector.at(j) = 0;
		}
	}
	//-------------------------------------------------------------- union
	for(size_t i = 0; i < first_vector.size(); ++i){
		if(first_vector.at(i) == 0 && second_vector.at(i) == 0){
			continue;
		}
		else if(first_vector.at(i) != 0 && second_vector.at(i) == 0){
			third_vector.push_back(first_vector.at(i));
		}
		else if(first_vector.at(i) == 0 && second_vector.at(i) != 0){
			third_vector.push_back(second_vector.at(i));
		}
		else{
			third_vector.push_back(first_vector.at(i));
			third_vector.push_back(second_vector.at(i));
		}
	}
		
}
