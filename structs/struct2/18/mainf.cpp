#define _nameW 16

struct PRODUCT{
	char c_name[_nameW];
	unsigned short us_id{};
	unsigned int ui_quantity{};
	float f_price{};
};

struct REQUEST{
	unsigned short id{};
	unsigned int quantity{};
};

void shows_product(std::vector <PRODUCT> *vPproduct){
	
	for(size_t i = 0; i < vPproduct->size(); ++i){
		
		std::cout << std::endl 
				  << "Quantity currectly prodcut(s)"
				  << std::endl
				  << "----------------------------"
				  << std::endl
				  << "Id-" << vPproduct->at(i).us_id
				  << std::endl
				  << "Name- " << vPproduct->at(i).c_name
				  << std::endl
				  << "Quantity- " << vPproduct->at(i).ui_quantity
				  << std::endl 
				  << "Price$- " << vPproduct->at(i).f_price << "AOA"
				  << std::endl 
				  << "----------------------------";
			
	}
}

void request_product(std::vector <PRODUCT> *vPproduct,unsigned short &us_idproduct,unsigned int &ui_quantityproduct){
	
	for(size_t i = 0; i < vPproduct->size(); ++i){
		
		if(us_idproduct == vPproduct->at(i).us_id){
			
			if(ui_quantityproduct <= vPproduct->at(i).ui_quantity){
				
				vPproduct->at(i).ui_quantity -= ui_quantityproduct;
				
			}else if(ui_quantityproduct > vPproduct->at(i).ui_quantity || vPproduct->at(i).ui_quantity == 0 || ui_quantityproduct == 0){
				
				std::cout << std::endl;
				std::cout << "Information:: We don't have '" << ui_quantityproduct << "' of the " << vPproduct->at(i).c_name << " on stock but we have '" << ui_quantityproduct << "'" << std::endl;	
				std::cout << "------------------------------------------------------------------------------";
				break;
			}
			
		}
	}
}