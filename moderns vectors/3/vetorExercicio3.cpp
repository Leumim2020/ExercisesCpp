#include <iostream>
#include <vector>
#include <math.h>

using std::vector;

int main(){
	
	vector<double> values (10),qd_values (10);
	
	for(size_t j = 0;j < values.size();j++){
		
		std::cout<<"N"<<j+1<<"-> ";
		std::cin>>values.at(j);
		
		qd_values.at(j) = pow(values.at(j),2);
		
		if(j == values.size()-1){
			for(size_t i=0;i < values.size();i++){
			
				std::cout<<"Number "<<values.at(i)<<" ^ 2 = "<<qd_values.at(i)<<"\n";
							
			}
		}
	}
	
	return 0;
}
	