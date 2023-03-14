#include <iostream>

void change(int *_value1,int* _value2);
void change_true(int *_value1,int* _value2);


int main(){

	
	return 0;
}


/*
	it's wrong
void change(int *_value1,int* _value2){
	
	int *_ch;
	*_ch = *_value1;
	*_value1 = *_value2;
	*_value2 = *_ch;
	
}
*/

void change_true(int *_value1,int* _value2){
	
	int _ch;
	_ch = *_value1;
	*_value1 = *_value2;
	*_value2 = _ch;
	
}