#include <iostream>

int main() {

	// switch function

	int month;
	std::cout << "Ukucajte mjesec ";
	std::cin >> month;

	switch (month) {
	case 1:
		std::cout << "Januar je";
		break;
	case 2:
		std::cout << "Februar je";
		break;
	case 3:
		std::cout << "Mart je";
		break;
	case 4:
		std::cout << "April je";
		break;
	case 5:
		std::cout << "Maj je";
		break;
	case 6:
		std::cout << "Juni je";
		break;
	case 7:
		std::cout << "Juli je";
		break;
	case 8:
		std::cout << "August je";
		break;
	case 9:
		std::cout << "Septembar je";
		break;
	case 10:
		std::cout << "Oktobar je";
		break;
	case 11:
		std::cout << "Novembar je";
		break;
	case 12:
		std::cout << "Decembar je";
		break;
	default:
		std::cout << "Molimo unesite brojeve";
	}
	
		return 0;
}