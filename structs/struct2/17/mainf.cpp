#define _electrodW 16

struct ELECTROD{
	
	char electroname[_electrodW];
	unsigned short activetimeH{};
	float potenceKW{};
	
};

void totalconsume(std::vector <ELECTROD> *velectrod,unsigned short &timeday){
	
	float totalconsume{},relativeconsume{},porcentage{};
	
	for(size_t i = 0; i < velectrod->size(); ++i){
		totalconsume += (velectrod->at(i).potenceKW * velectrod->at(i).activetimeH * timeday);
	}
	
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Total consume in KWh-> " << totalconsume << std::endl;
	std::cout << "---------------------------------------" << std::endl;	

	for(size_t i = 0; i < velectrod->size(); ++i){
		relativeconsume =  velectrod->at(i).potenceKW * velectrod->at(i).activetimeH * timeday; 
		porcentage = ((relativeconsume * 100) / totalconsume);
		std::cout << velectrod->at(i).electroname << " relative consume-> " << relativeconsume << "%" << std::endl; 
	}
	
}