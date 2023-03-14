#include <iostream>

void soma(float* a,float b);

int main(){
	
	float n = 0;
	
	soma(&n,12);
	
	std::cout<<n;

	return 0;
}

void soma(float* a,float b){
	*a+=b;
}