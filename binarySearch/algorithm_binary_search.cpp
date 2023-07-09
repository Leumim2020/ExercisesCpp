#include <iostream>
#incl	ude <vector>

bool binary_search(unsigned *first_iterator,unsigned *last_iterator,int &key);

int main(int argc,char *argv[]){

    std::vector <int> v(5);
    int n;
    
    for(auto it = v.begin(); it != v.end();){
    	std::cout << "Type number-> ";
    	std::cin >> n;
    	if(binary_search(v.begin(),v.end(),n)){
    		std::cout << "number found";
    	}
		else{
			*it = n;
			++it;
		}
	}	

    return 0;
}

bool binary_search(unsigned *first_iterator,unsigned *last_iterator,int &key)
{
    bool number_found{};
    
    for(auto val = first_iterator; val != last_iterator;++val){
    	if(key == *val){
    		~number_found;		
		}
	}    
	
	return number_found;
}