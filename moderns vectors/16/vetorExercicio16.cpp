/*

	Faça um programa que leia um vetor de 5 posições para números reais e, depois, um 
	código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem 
	direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2 
	escreva uma mensagem informando que o código e inválido.

*/

#include <iostream>
#include <vector>

using std::endl;

int main(){

	std::vector<float> number1(5);

	for(size_t i = 0;i < number1.size();i++){
		std::cout << "Number" << i+1 << "-> ";
		std::cin >> number1.at(i);
		if(i == number1.size() - 1){
			unsigned short n{};

			std::cout << endl << "Type number for determinate order (1)growing or(2)decreasing: ";
			std::cin >> n;
			if(n == 1){
				float smallNumber{};
				std::cout << "Vector growing: ";
				for(size_t i = 0;i < number1.size();i++){
					for(size_t j = 0;j < number1.size();j++){
						if(number1.at(i) < number1.at(j)){
							smallNumber = number1.at(i);
							number1.at(i) = number1.at(j);
							number1.at(j) = smallNumber;
						}
					}
				}
			}else if(n == 2){
				float largeNumber{};
				std::cout << endl << "Vector descreasing: ";
				for(size_t i = 0;i < number1.size();i++){
					for(size_t j = 0;j < number1.size();j++){
						if(number1.at(i) > number1.at(j)){
							largeNumber = number1.at(j);
							number1.at(j) = number1.at(i);
							number1.at(i) = largeNumber;
						}
					}
				}
			}else{
				std::cout << " Number invalid please type number valid 1 or 2";
			}
		}
	}

	for(size_t i = 0;i < number1.size();i++){
		std::cout<< number1.at(i) << " ";
	}

	return 0;
}