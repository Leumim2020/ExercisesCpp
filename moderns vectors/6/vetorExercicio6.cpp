/*
	Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
	ser impresso o maior e o menor elemento do vetor.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> values(10);
	int larger_value{},smaller_value{};
	
	for(size_t i = 0;i < values.size();i++){
		cout<<"Number"<<i+1<<"-> ";
		cin>>values.at(i);
		
		if(values.at(i) > larger_value){
			larger_value = values.at(i);
		}
		
		if(i == values.size()-1){
			
			smaller_value = values.at(i);
			
			for(size_t i = 0;i < values.size();i++){
				
				if(values.at(i) < smaller_value){
					
					smaller_value = values.at(i);			
				}
			}
		}
	}
	
	cout<<"O valor menor e "<<smaller_value<<" e o maior e "<<larger_value;
	
	return 0;
}

