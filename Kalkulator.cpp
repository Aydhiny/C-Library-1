#include <iostream>

int main() {

	char op;
	double num1;
	double num2;
	double result;

	std::cout << "************ KALKULATOR ****************" << std::endl;

	std::cout << "Unesite zeljenu funkciju: ";
	std::cin >> op;

	std::cout << "Unesite broj: ";
	std::cin >> num1;

	std::cout << "Unesite broj: ";
	std::cin >> num2;

	switch (op) {
	case '+':
		result = num1 + num2;
		std::cout << "Rezultat je : " << result << std::endl;
		break;
	case '-':
		result = num1 - num2;
		std::cout << "Rezultat je : " << result << std::endl;
		break;
	case '*':
		result = num1 * num2;
		std::cout << "Rezultat je : " << result << std::endl;
		break;
	case '/':
		result = num1 / num2;
		std::cout << "Rezultat je : " << result << std::endl;
		break;
	default: 
		std::cout << "Molimo unesite neku mtm operaciju";

	}

	return 0;
}