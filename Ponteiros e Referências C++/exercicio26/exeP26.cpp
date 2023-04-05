/*
	Implemente uma função que calcule as raíızes de uma equação do segundo grau do tipo 
	Ax^2 + Bx + C = 0
	
	A variável A tem que ser diferente de zero.
	• Se ∆ < 0 não existe real.
	• Se ∆ = 0 existe uma raiz real.
	• Se ∆ ≥ 0 existem duas raízes reais.
	Essa função deve obedecer ao seguinte protótipo:
	
	Essa função deve ter como valor de retorno o número de raízes reais e distintas da
	equação. Se existirem raízes reais, seus valores devem ser armazenados nas variáveis
	apontadas por X1 e X2.
	
*/


#include <iostream>
#include <cmath>

int raizes(float a,float b,float c,float *x1,float *x2);

int main(int argc, char** argv){

	float a{},b{},c{},x1{},x2{};
	short qt_r;
	
	std::cout<<"Type value a-> ";
	std::cin>>a;
	std::cout<<"Type value b-> ";
	std::cin>>b;
	std::cout<<"Type value c-> ";
	std::cin>>c;
	
	qt_r = raizes(a,b,c,&x1,&x2);
	
	if(qt_r == 0){
		std::cout<<"\nNot find raizes reais ";
	}
	else if(qt_r == 1){
		std::cout<<"\nFind one raiz real";
		//std::cout<<"\n"<<"X1="<<x1<<"\n"<<"X2="<<x2;
	}else{
		std::cout<<"\nFind two raiz reais";
		//std::cout<<"\n"<<"X1="<<x1<<"\n"<<"X2="<<x2;
	}
	
	return 0;
}


int raizes(float a,float b,float c,float *x1,float *x2){
	
	float delta, Baskara;
	
	Baskara = (b*b) + (4*a*c);
	delta = sqrt(Baskara);
	
	std::cout<<"Baskara = ("<<b<<"^2) + 4 x ("<<a<<") x ("<<c<<")"<<std::endl;
	std::cout<<"Baskara = "<<Baskara<<std::endl;
	std::cout<<"delta = raizquadrada("<<Baskara<<")"<<std::endl;
	std::cout<<"delta = "<<delta<<std::endl;
	
	if(delta < 0){
		return 0;
		
	}else if(delta == 0){
		
		*x1 = ((-b + (sqrt(delta)))/(2*a));
		*x2 = ((-b - (sqrt(delta)))/(2*a));
		return 1;
		
	}else{
		
		*x1 = ((-b + (sqrt(delta)))/(2*a));
		*x2 = ((-b - (sqrt(delta)))/(2*a));	
		return 2;
	
	}	
	
	
}