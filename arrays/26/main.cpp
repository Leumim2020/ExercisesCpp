/*Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,
onde m é a media do vetor.*/

#include <iostream>
#include <math.h>
#define size 10

int main(){
	
	double v[size],soma=0,media=0,somatorio=0,desvio_padrao; 
	//double r,s;
	
	// input valores
	for(int i=0;i<size;i++){
		std::cout<<"Valor"<<i+1<<"-> ";
		std::cin>>v[i];
		soma+=v[i];
	}
	// calculando a média do vetor
	media = soma / size;
	
	// calcular o somatório
	for(int j=0; j < size; j++){
		// função pow(x,y) calcula a potência sendo x a base e y o expoente
		somatorio += pow(v[j] - media,2);
		/*Ou r = v[i] - media; 
			somatorio += r*r;
		*/
	}
	
	// calcular a raiz quadrada do desvio padrão
	desvio_padrao= sqrt(somatorio/(size-1));
	/*Ou s = somatorio/(size-1);
		desvio_padrao = sqrt(s);
	*/
	
	std::cout<<"O desvio padrao e "<<desvio_padrao;
	
	
	return 0;
}
