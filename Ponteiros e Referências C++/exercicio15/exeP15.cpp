/*

Crie uma função que receba como parametro um array e o imprima. Não utilize índices
para percorrer o array, apenas aritmetica de ponteiros. 

*/

#include <iostream>
#include <vector>

using std::vector;

void print_array(const vector<float> &number);

int main(int argc, char** argv){

	vector<float> n{};
	float value{};
	                  
	std::cout<<"Type 0 for to stop the read \n";				           
	while(true){
		
		std::cout<<"Number-> ";			
		std::cin>>value;

		if(value == false){
			
			std::cout<<"You typing 0 number "<<std::endl;
			print_array(n);
			break;
			
		}else{
			n.push_back(value);
			value = 0;
	
		}
	}
	
	
return 0;
}
 

void print_array(const vector<float> &number){
	
	std::cout<<"Printing the vector-> ";
	for(size_t i = 0;i < number.size();i++){
		std::cout<<*(number.data()+i)<<" ";
	}
}
