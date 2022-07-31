/*
Write a program that reads a positive integer n and then prints n
 lines of the so-called Pascal's Triangle:

*/
#include <iostream>

int factorial(int n);
int binomialNewton(int n,int k);
void espace(int n,int i);


int main(int argc,char **argv){

	int nRows{};

	std::cin>>nRows;

	for(int i = 0;i <= nRows;i++){
			int j{};
			espace(nRows,i);
			for(j;j <= i;j++){// remember that 'j' stands for "k" and 'i' the "n" in Newton's binomial and must be 'k <= n'
				std::cout<<binomialNewton(i,j)<<" ";
				//or
				//std::cout<<(factorial(i))/(factorial(j)*factorial(i-j))<<" ";
			}
			std::cout<<"\n";
	}

	return 0;
}


int factorial(int n){

	int nfactorial{1};

	for(int i = 1;i <= n;i++){
		nfactorial*=i;
	}

	return nfactorial;
	//or 
	/* 
		int nfactorial{n};
		for(int i = 1;i < n;i++){
			nfactorial*=i;
		}
		return nfactorial;
	*/
}

int binomialNewton(int n,int k){
	return (factorial(n))/(factorial(k)*factorial(n-k));
}
void espace(int n, int i){
	for(int j = 0; j <= n-1-i;j++){
		std::cout<<" ";
	}
}