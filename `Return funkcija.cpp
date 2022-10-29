#include <iostream>
#include <math.h>

double square(double length);
double cube(double length);

int main() {

	double length = 6.0;
	double area = square(length);
	double volume = cube(length);


	std::cout << "Area: " << area << "cm2" << std::endl;
	std::cout << "Volume: " << volume << "cm3" << std::endl;

	return 0;
}
double square(double length) {
	return length * length;
}
double cube(double length) {
	return length * length * length;

}