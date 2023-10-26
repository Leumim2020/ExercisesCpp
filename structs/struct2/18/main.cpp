#include <iostream>
#include <limits>
#include <vector>
#include "mainf.cpp"

void shows_product(std::vector <PRODUCT> *vPproduct);
void request_product(std::vector <PRODUCT> *vPproduct,unsigned short &us_idproduct,unsigned int &ui_quantityproduct);

int main() {
	
	std::vector <PRODUCT> vPproduct(5);
	std::vector <REQUEST> vRrequest(1);
	
	for(size_t i = 0; i < vPproduct.size(); ++i){
		
		std::cout << std::endl 
				  << "---------------------------" << std::endl;
		std::cout << "Id-" ;
		std::cout << i+1  << std::endl;	
		vPproduct.at(i).us_id = i+1;	
		std::cout << "Product name: ";
		std::cin.getline(vPproduct.at(i).c_name,_nameW);
		std::cout << "Price $: ";
		std::cin >> vPproduct.at(i).f_price;
		std::cout << "Quantity: ";
		std::cin >> vPproduct.at(i).ui_quantity;
	
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	for(size_t i = 0; i < vPproduct.size();){
	
		std::cout << std::endl 
			  	  << "--------------------------- " << std::endl; 
		std::cout << "Request type id: ";
		std::cin >> vRrequest.at(i).id;
		std::cout << "Request type quantity: ";
		std::cin >> vRrequest.at(i).quantity;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		
		if(!vRrequest.at(i).id){
			
			break;
			
		}else{
			
			request_product(&vPproduct,vRrequest.at(i).id,vRrequest.at(i).quantity);
			shows_product(&vPproduct);
			
		}
		
	}
	
	
	
	return 0;
}