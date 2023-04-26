#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
	
	vector<double> values (10),qd_values (10);
	
	for(size_t j = 0;j < values.size();j++){
		
		cout<<"N"<<j+1<<"-> ";
		cin>>values.at(j);
		
		qd_values.at(j) = pow(values.at(j),2);
		
		if(j == values.size()-1){
			for(size_t i=0;i < values.size();i++){
			
				cout<<"Number "<<values.at(i)<<" ^ 2 = "<<qd_values.at(i)<<"\n";				
			}
		}
	}

	return 0;
}
	
