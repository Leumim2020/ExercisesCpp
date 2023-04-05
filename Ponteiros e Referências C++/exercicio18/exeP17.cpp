/*

Implemente uma função que calcule a área da superfície e o volume de uma esfera de
raio R. Essa função deve obedecer ao protótipo: 

void calc_esfera(float R, float *area, float *volume);

A área da superfície e o volume são dados, respectivamente, por:
A = 4 * p * R2
V = 4/3 * p * R3

*/

#include <iostream>
const float p = 3.1415;

void calc_sphere(float R, float *area, float *volum);

int main(int argc, char** argv){

	float A{},R{},V{};
	
	std::cout<<"Ray of the sphere-> ";
	std::cin>>R;
	
	calc_sphere(R,&A,&V);
	
	std::cout<<"Area of the sphere is "<<A<<" m^2"<<std::endl;
	std::cout<<"Volum of the sphere is "<<V<<" m^3";
	
	return 0;
}

void calc_sphere(float R,float *area,float *volum){
	
	*area = 4 * p * R;
	*volum = (4/3) * p *R;
}