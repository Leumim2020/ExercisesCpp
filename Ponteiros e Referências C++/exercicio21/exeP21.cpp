#include <iostream>
#define size 10

int main(int argc, char** argv){

	int n[size] = {2,10,5,23,45,23,333,45,100,1};
	int *ptr = n;
	
	std::cout<< "A new array: ";
	
	for(size_t i = 0; i < size;i++){
	
		*(ptr) +=1;	
	
		if(i == size - 1){
	
			for(size_t j =0;j < size;j++){
	
				std::cout<<*(ptr)+j<<" ";
	
			}
		}
		
	}
	
	return 0;
}
