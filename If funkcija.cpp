#include <iostream>

int main() {

	int age;
	std::cout << "Koliko godina imas?= ";
	std::cin >> age;

	if (age >= 100) {
	std::cout << "Prestar si buraz hahaha";
	}
	else if (age >= 18) {
		std::cout << "Dobrodosli!";
	}
	else if (age == 0) {
		std::cout << "Kako mozes 0 godina imat";
	}
	else if (age <0) {
		std::cout << "Nisi se ni rodio buraz";
	
	}
	else {
		std::cout << "Nemas 18 burazz";
    }
	
	return 0;
}