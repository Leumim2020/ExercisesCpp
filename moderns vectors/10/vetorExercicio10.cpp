#include <iostream>
#include <vector>

using std::vector;

int main(){
	
	vector<float>notas(15);
	float media{};
	size_t j{};
	
	while(j < notas.size()){

		std::cout<<"Aluno"<<j+1<<" nota-> ";
		std::cin>>notas.at(j);
		
		if(notas.at(j) < 0 || notas.at(j) > 20)
		{
			std::cout<<"Nota nao e valida \n";
			notas.at(j) = 0;
			
		}else{
			media = media + notas.at(j);
			j++;
		}
	}
	std::cout<<"\n Media geral e "<<media/notas.size();

return 0;
	
}
