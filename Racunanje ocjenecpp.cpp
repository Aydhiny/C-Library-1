#include <iostream>

int main() {

	char ocjena;

	std::cout << "Koju ste ocjenu dobili? ";
	std::cin >> ocjena;

	switch (ocjena) {
	case 'A':
		std::cout << "Pametan si lol";
		break;
	case 'B':
		std::cout << "i cetvorka je za ljude";
		break;
	case 'C':
		std::cout << "Malo si kritican";
		break;
	case 'D':
		std::cout << "Are u serious?";
		break;
	case 'F':
		std::cout << "Baci se s mosta :)";
		break;
	default:
		std::cout << "Molimo unesite ocjenu";

		return 0;
	}
}