#define _BEGINYEAR 1900

struct PERSON{
	std::string name,country,nif,city,email;
	unsigned short day{},month{},year{};
};

std::string month(unsigned short &usmonth){
	switch(usmonth){
		case 1:
			return "Janeiro";
			break;
			
		case 2:
			return "Fevereiro";
			break; 
		
		case 3:
			return "Março";
			break;	
		
		case 4:
			return "Abril";
			break;
		
		case 5:
			return "Maio";
			break;
			
		case 6:
			return "Junho";
			break;
		
		case 7:
			return "Julho";
			break;		
		
		case 8:
			return "Agosto";
			break;
		
		case 9: 
			return "Setembro";
			break;
		
		case 10:
			return "Outubro";
			break;
		
		case 11:
			return "Novembro";
			break;
			
		case 12:
			return "Dezembro";		
		
		default:
			return " ";
			
	}
}


void validateBirthday(unsigned short &usday,unsigned short &usmonth,unsigned short &usyear) {
	
	std::time_t T = std::time(nullptr);
	std::tm* T_CORRENTLY = std::localtime(&T);
	
	if((T_CORRENTLY->tm_year + _BEGINYEAR) <= usyear){
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "Warnning::Year '" << usyear << "' typed is not valid" << std::endl;
		usyear=!usyear;
	}

	
	switch(usmonth){
		case 1:
			if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;	
			
		case 2:
			if(!(usday >= 1 && usday <= 28)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 3:
			if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 4:
			if(!(usday >= 1 && usday <= 30)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 5:
			if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 6:
			if(!(usday >= 1 && usday <= 30)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 7:
				if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 8:
			if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 9:
			if(!(usday >= 1 && usday <= 30)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 10:
				if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 11:
				if(!(usday >= 1 && usday <= 30)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
		
		case 12:
				if(!(usday >= 1 && usday <= 31)){std::cout << "Warnning::Day '" << usday << "' is not correspond with month '" << month(usmonth) << "'"; usday = !usday;}
			break;
				
		default:
			if(usmonth > 12){
				std::cout << std::endl <<"Warnning::Month '" << usmonth << "' is not valid or not correspond with a month from the year" << std::endl;
				std::cout << "-------------------------------------------" << std::endl;
				usmonth = !usmonth;
			}				
	}
	
}

void validateEmail_Nif(std::string &semail,std::string &snif){
	
	if(snif.length() > 14){
		std::cout << std::endl << "Warnning:: Max length nif is '14' chars";
		snif = {""};
	}
		
	if(semail.length() == 21){
		
		if(std::count(semail.begin(),semail.end(),'@') > 1){
			std::cout << std::endl << "Warnning::Char '@' duplicate you must only one"; 
			semail = {""};
		}
		
		for(auto i = 0; i < semail.length(); ++i){
			if('@' == semail.at(i) && i <= ((semail.length()-1)/2)){
				std::cout << std::endl << "Warnning::You not can type '@' before 'name', you must type after 'name@gmail.com'";
				semail = {""};
				break;
			}
		}
		
		if(!semail.empty()){
			if(semail.find("@gmail") != std::string::npos){}
			else{
				std::cout << std::endl <<"Warnning::You not type '@gmail.com' sentace not found ";
			}
		}
	
	}else{
		std::cout << std::endl <<"Warnning::Max email length is '20' chars"; 
		semail = {""};	
	}

}
