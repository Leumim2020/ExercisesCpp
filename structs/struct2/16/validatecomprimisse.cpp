#define _comprimisseW 61
#define _BEGINYEAR 1900

struct DATE{
	unsigned short day{},month{},year{};
};

struct COMPRIMISSE{
	char comprimissename[_comprimisseW];
	DATE comprimissedate;
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

void validate_date(unsigned short &usday,unsigned short &usmonth,unsigned short &usyear){
	
	std::time_t T = std::time(nullptr);
	std::tm* T_CORRENTLY = std::localtime(&T);
	
	if((T_CORRENTLY->tm_year + _BEGINYEAR) > usyear){
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "Warnning::Year '" << usyear << "' typed is not valid you can't market comprimisse on past" << std::endl;
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
				std::cout <<"-------------------------------------------" << std::endl;
				usmonth = !usmonth;
			}				
	}
	
}

void validate_comprimisse(std::vector <COMPRIMISSE> *vcompromisse,unsigned short &usmonth, unsigned short &usyear){
			
	size_t j = 0;
	
	std::cout << "---------------------------------" << std::endl;
	while(j < vcompromisse->size()){
		if(usmonth == vcompromisse->at(j).comprimissedate.month && usyear == vcompromisse->at(j).comprimissedate.year){
			std::cout << std::endl 
					  << "Comprimisse name: " << vcompromisse->at(j).comprimissename 
					  << std::endl
			          << "Date: " << vcompromisse->at(j).comprimissedate.day
					  << "/ " << month(vcompromisse->at(j).comprimissedate.month) << " /"
					  << vcompromisse->at(j).comprimissedate.year;
		}
	++j;
	}
	std::cout << std::endl 
	<< "---------------------------------" << std::endl;
}