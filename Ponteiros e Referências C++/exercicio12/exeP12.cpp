#include <iostream>
#include <vector>

using std::vector;

int ascending_order_vector(vector<int> &n);

int main(int argc, char** argv){
	
	vector<int>number(3);
	int value_return;

	for(size_t i = 0; i < number.size();i++){
		std::cin>>number.at(i);
	}
	
	value_return = ascending_order_vector(number);
	
	std::cout<<value_return;
	
	return 0;
}

int ascending_order_vector(vector<int> &n){

	int exchange,j = n.size();
	
	for(size_t i = 0;i < n.size();i++){
		for(size_t j = i+1;j < n.size();j++){
			if(n.at(i) > n.at(j)){
				exchange = n.at(j);
				n.at(j) = n.at(i);
				n.at(i) = exchange;
			}
		}
	}
	
	std::cout<<"Array order-> ";
	for(size_t i = 0;i < n.size();i++){
		std::cout<<n.at(i)<<" ";
	}
	
	
	for(size_t i = 0;i < n.size();i++){
		if(n.at(0) == n.at(i))
			j--;
		else
			continue;		
	}		
	
	std::cout<<"\nValue return the function-> ";
	if(j == 0)
		return 1;
	else
		return 0;
}
