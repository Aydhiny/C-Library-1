#include <iostream>
#include <math.h>

int main() {

	double a;
	double b;
	double c;

	std::cout << "Insert a= ";
	std::cin >> a;

	std::cout << "Insert b= ";
	std::cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	std::cout << "This is c= " << c;

	return 0;
}