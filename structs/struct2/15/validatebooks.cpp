#define _titleW 31
#define _autorW 16

struct BOOK{
	char title[_titleW],
		 autor[_autorW];
	unsigned short year{};
};
	
void searchbooks(std::vector <BOOK> *bvalue,const char *book){
	
	unsigned short totalbooksfound{};
	
	std::cout << "Book(s) found(s) list of title: " << std::endl;
	std::cout << "-----------------------------" << std::endl;

	for(auto id = 0; id < bvalue->size(); ++id){
		std::string titlebook = bvalue->at(id).title;
		if(titlebook.find(book) != std::string::npos){
			std::cout <<  " " << id << "-" << bvalue->at(id).title << std::endl;
			++totalbooksfound;
		}
	}
	
	std::cout << "-----------------------------" << std::endl;

	if(totalbooksfound) 
		std::cout << "Total books->" << totalbooksfound;
	else
		std::cout << "Not book(s) was found(s)-> " << totalbooksfound; 
		
}