#include <iostream>
#include <cmath>

struct POLAR{
	float raio{},rad{};
};
struct CARTESIAN{
	float x{},y{};
};

int main() {
	
	POLAR PRRD;
	CARTESIAN PC;
	
	std::cout << "Raio: ";
	std::cin >> PRRD.raio;
	std::cout << "Radian: ";
	std::cin >> PRRD.rad;
	
	PC.x = PRRD.raio * (cos(PRRD.rad));
	PC.y = PRRD.raio * (sin(PRRD.rad));

	std::cout << "Cartesian Plan x,y(" << PC.x << "," << PC.y << ")";

	
	return 0;
}