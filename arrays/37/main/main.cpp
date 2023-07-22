#include <iostream>
#define size 10

int main(){
	int n[size]{};
	int change{};
	for(int i = size -1;i >= 0;i--){
		std::cout << "Value-> ";
		std::cin>>n[i];
			int j{size-1};
			for(j ;j >= 0; j--){
				if(n[j]!=0 && n[i] > n[j]){
						change = n[i];
						n[i] = n[j];
						n[j] = change;
				}
			}
	}
	
	std::cout << "Vector sort ascending-> ";
	for(int i = 0;i < size;i++)
			std::cout << n[i] <<" ";
				
    return 0;
}
