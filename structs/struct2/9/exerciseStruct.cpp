#include <iostream>
#include <complex>
#include <cmath>
#include <vector>
const size_t s = 2;

struct NCOMPLEX{
	float pReal{},pImag{};
};

float modComplex(float &valueReal,float &valueImag);

int main(){
	
	std::vector <NCOMPLEX> ncP(s);	
	std::complex <float> sum,sub,mult;
	float modZ,modW;
	
	for(size_t i = 0;i < s; ++i){
		std::cout << "Type Re(z): ";
		std::cin >> ncP.at(i).pReal;
		std::cout << "Type Imag(z): ";
		std::cin >> ncP.at(i).pImag;
	}	
	
	for(size_t i = 0;i < s-1; ++i){
		for(size_t j = 1;j < s; ++j){
			sum = {ncP.at(i).pReal + ncP.at(j).pReal , ncP.at(i).pImag + ncP.at(j).pImag};
			sub = {ncP.at(i).pReal - ncP.at(j).pReal , ncP.at(i).pImag - ncP.at(j).pImag};
			mult = {((ncP.at(i).pReal * ncP.at(j).pReal) - (ncP.at(i).pImag * ncP.at(j).pImag)) + ((ncP.at(i).pReal * ncP.at(j).pImag) - (ncP.at(i).pImag * ncP.at(j).pReal))};
			modZ = modComplex(ncP.at(i).pReal,ncP.at(i).pImag);
			modW = modComplex(ncP.at(j).pReal,ncP.at(j).pImag);
		}
		
		std::cout << "Sum ("<< ncP.at(i).pReal << "," << ncP.at(i).pImag << ") + (" << ncP.at(i+1).pReal << "," << ncP.at(i+1).pImag << ") = " << sum << "\n"; 
		std::cout << "Sub ("<< ncP.at(i).pReal << "," << ncP.at(i).pImag << ") - (" << ncP.at(i+1).pReal << "," << ncP.at(i+1).pImag << ") = " << sub <<  "\n"; 
		std::cout << "Multiplication ("<< ncP.at(i).pReal << "," << ncP.at(i).pImag << ") * (" << ncP.at(i+1).pReal << "," << ncP.at(i+1).pImag << ") = " << mult; 
		std::cout << "\nModulo of Z: " << modZ << "\nModulo of W: " << modW;					 
	}		
	
	
	return 0;
}


float modComplex(float &valueReal,float &valueImag){
	
	return sqrt((pow(valueReal,2) + pow(valueImag,2)));	
}