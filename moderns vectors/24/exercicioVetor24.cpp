#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	unsigned short position_larger_height{},position_small_height{};
	const int size_v {10};
	std::vector<int> id_number_student(size_v);
	std::vector<float> height_student(size_v);
	float larger_height{},small_height{};

	small_height = size_v;

	for(size_t i = 0; i < size_v; ++i){

		std::cout << i+1 << "-Student height-> ";
		id_number_student.at(i) = i+1;
		std::cin >> height_student.at(i);
		//--------------------------------------------
		if(height_student.at(i) > larger_height){
			larger_height = height_student.at(i);
			position_larger_height = i;
		}		
		
	}
	//--------------------------------------------
	for (size_t j = 0; j < size_v; ++j){
			if(height_student.at(j) < small_height){
				small_height = height_student.at(j);
				position_small_height = j;
			}
	}

	std::cout << "The student more tall is number " << position_larger_height+1 << " and has a height of " << larger_height;
	std::cout << std::endl;
	std::cout << "The student more small is number " << position_small_height+1 << " and has a height of " << small_height;
	return 0;
}