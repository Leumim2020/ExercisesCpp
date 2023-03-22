/*
	Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
	endereço de cada posição desse array

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<float>number{3.5,40,22,120,23,89,450,1222,34,1};
   		    
   for(size_t i = 0; i < number.size();i++){
 		cout<<"Position-> "<<(number.data()+i)<<"\n";
    }

    return 0;
}
