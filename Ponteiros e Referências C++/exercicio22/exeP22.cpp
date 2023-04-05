/*

	Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornará
	a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
	entao a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma
	deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulaçãoo do array. 

*/

#include <iostream>
#include <vector>

using std::vector;

int sum_array(vector<float> &v1,vector<float> &v2,vector<float> &v3);

int main(int argc, char** argv){

	vector<float>v1,v2,v3;
	float x{},value_r;	
	
	std::cout<<"Type 0 for to stop of to read "<<std::endl;
	while(true){
		
		std::cout<<"Type value one of vector-> ";
		std::cin>>x;
	
		if(x == false){
		
			while(true){
			
				std::cout<<"Type value two of vector-> ";
				std::cin>>x;
				
				if(x == false){
					
					value_r = sum_array(v1,v2,v3);
					break;
			
				}else{
					v2.push_back(x);
				}	
			}
		
		break;
				
		}else{
			v1.push_back(x);	
		}
	}
	
	std::cout<<"\nFunction sum array return "<<value_r;
	
	return 0;
}


int sum_array(vector<float> &v1,vector<float> &v2,vector<float> &v3){
	
	std::cout<<"\n\nVector three value-> ";
	
	if(v1.size() == v2.size()){
			
		for(size_t i = 0;i < v1.size();i++){
			
			v3.push_back(v1.at(i)+v2.at(i));
			std::cout<<v3.at(i)<<" ";
			
		}
		
		return 1;
				
	}else{
		return 0;
	}	
}