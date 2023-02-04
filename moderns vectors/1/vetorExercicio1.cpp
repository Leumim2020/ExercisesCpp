#include <iostream>
#include <vector>

using std::vector;

int main(){
		

	vector<int> A {1,0,5,-2,-5,7};
	size_t soma {};
	

	soma = A.at(0) + A.at(1) + A.at(5);
	A.at(3) = 100;	
	

	std::cout<<" Soma de "<<A.at(0)<<"+"<<A.at(1)<<"+"<<A.at(5)<<"= "<<soma<<" \n";
	
	
	for(size_t i=0; i < A.size(); i++){
			std::cout<<"\n Linha"<<i+1<<"-> "<<A.at(i);
	}
	
	return 0;
	
}