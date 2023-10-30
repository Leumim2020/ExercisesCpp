#define _aeroport 5
#define _codeW 12

struct PLAIN{
	char codeofaeroport{};
	char codeofplain_inside[_codeW],codeofplain_outside[_codeW];
};

struct AEROPORT{
	char codeofaeroport{};
	unsigned int plainquantity_inside{},plainquantity_outside{};
};

int cast(char &cvalue){

	short codeascii = (short)cvalue;
	if(codeascii >= 48 && codeascii <= 52)
		return 1;
	else
		return 0;
}