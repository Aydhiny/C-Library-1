#include <iostream>

int main() {

	char vrsta;
	double tezina;
	

	std::cout << "*********KILOGRAMI U POUNDS***********" << std::endl;
	std::cout << "K = Kilogram" << std::endl;
	std::cout << "P = Pound" << std::endl;

	std::cout << "Unesite vrijednost: ";
	std::cin >> tezina;

	std::cout << "Iz kojeg tipa konvertujete?: ";
	std::cin >> vrsta;

	switch (vrsta) {
	case('K'):
		tezina = tezina * 2.20462;
		std::cout << "Vasa tezina je: " << tezina << std::endl;
		break;
	case('P'):
		tezina = tezina * 0.453592;
		std::cout << "Vasa tezina je: " << tezina << std::endl;
		break;
	default:
		std::cout << "Unijeli ste pogresnu vrijednost" << std::endl;
	}

	return 0;
}