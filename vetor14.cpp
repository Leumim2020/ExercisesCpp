
#include <iostream>
#define size 5


void searchLinear(int value,int position){

	int repeated_values[5]={};
	bool t=false;

	for(int i=0; i < 5; i++){
		// if t = true then value already exists in repeated_values ​​array
		if(value == repeated_valuesd[i]){
			t=true;
		}
	}
	//if t = false then value does not exist in repeated_values ​​array and will not be repeated
		if(t == false){
			repeated_values[position]=value;
		}
		// output values ​​that are repeated in the array
			std::cout<<repeated_values[position];
			std::cout<<"\n";
}



int main(void){
	
	int values[size]={2,2,4,1,4};
	int i=0;
	int x,p;

	std::cout<<"Valores que se repetem no vetor: \n";

	while(i < size){
		for(int j=0;j < size;j++){
			 if(i != j){
						if(values[i] == values[j]){
						int x,p;
						x=values[i];
						p=i;
						searchLinear(x,p);
					}
			}
		}
		
	i++;
	}


	
return 0;
} 