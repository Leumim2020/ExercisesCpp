#include <iostream>

long long biNewton(int n,int k);
long long fat(int n);

int main(){
	
	int nrow{};
	
	std::cout << "How many line(s) of the triangle pascal-> ";
	std::cin >> nrow;
	
	for(int i = 0; i <= nrow; ++i){
		for(int j  = 0; j <= i; ++j){
			std::cout << biNewton(i,j) << " ";			
		}
		std::cout << std::endl;
	}
	
	return 0;
}

long long fat(int n){

	long long fat{1};
	for(int i = 1; i <= n; ++i)
		fat*=i;
		
	return fat;
}
long long biNewton(int n,int k){
	return (fat(n)/(fat(k)*(fat(n-k))));
}

