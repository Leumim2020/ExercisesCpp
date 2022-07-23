/*

Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.

*/


#include <iostream>
#define size 10

int main(){

	int n[size]{};
	int change{};

	for(int i = size -1;i >= 0;i--){

		std::cin>>n[i];
		std::cout<<"\n";

			int j{size-1};

			for(j ;j >= 0; j--){
				
					if(n[j]!=0 && n[i] > n[j]){

						change = n[i];
						n[i] = n[j];
						n[j] = change;
					}
				}

			for(int i = 0;i < size;i++){

				if(n[i] == false){
					continue;
				}else{
					std::cout<<n[i]<<" ";
				}

			}
			std::cout<<"\n \n";
	}


    return 0;


}
