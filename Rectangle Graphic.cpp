#include <iostream>

int main() {

	int redovi;
	int kolone;
	char symbol;

	std::cout << "Unesite koliko redova zelite: ";
	std::cin >> redovi;

	std::cout << "Unesite koliko kolona zelite: ";
	std::cin >> kolone;

	std::cout << "Unesite vas mbol: ";
	std::cin >> symbol;

	for(int i = 1; i <= redovi; i++) {
		for (int j = 1; j <= kolone; j++) {
			std::cout << symbol;
		}

		std::cout << '\n';
	}
		return 0;
	
}