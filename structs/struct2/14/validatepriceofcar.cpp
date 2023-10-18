#define _markW 16

struct CAR{
	char mark[_markW];
	unsigned short year{};
	double price{};
};

void searchcheapcar(std::vector <CAR> *scar){
	
	size_t j = 0;
	double dprice{};
	
	while(true){
		
		std::cout << "Search cheaps Cars type price$: ";
		std::cin >> dprice;
		
		if(dprice == 0)
			break;
		else{
			std::cout << "---------------------------------" << std::endl;
			while(j < scar->size()){
				if(dprice > scar->at(j).price){
					std::cout << std::endl 
			          << "Mark of the Car:" << scar->at(j).mark << std::endl 
					  << "Year of the Car: " << scar->at(j).year << std::endl
					  << "Price$ of the Car: " << scar->at(j).price;
				}
			++j;
			}
			std::cout << std::endl 
					  << "---------------------------------" << std::endl;
		}
	}
		
}
