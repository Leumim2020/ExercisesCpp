/*

Fa�a um programa que leia 2 valores inteiros e chame uma func�o que receba estas 
2 vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas 
vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter o valor de B e B 
ter� o valor de A.

*/
#include <iostream>

void change(int* _value1,int* _value2){
	int _ch {*_value1};
	*_value1 = *_value2;
	*_value2 = _ch;
}

int main(){
	
	int _val1{},_val2{};
	
	std::cout<<"Value1-> ";
	std::cin>>_val1;
	std::cout<<"Value2-> ";
	std::cin>>_val2;
	
	change(&_val1,&_val2);
	
	std::cout<<"Value1 now is ->"<<_val1<<"\n"<<"Value2 now is -> "<<_val2;
	

	return 0;
}
