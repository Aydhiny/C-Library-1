#include <iostream>

double getTotal(double prices[], int size) {

	double total = 0;

	for (int i = 0; i < size; i++) {
		total = total + prices[i];

		return total;
	}

}

int main() {

	double prices[] = { 50.00, 25.00, 420.69 };
	int size = sizeof(prices) / sizeof(prices[0]);
	double total = getTotal(prices, size);


	std::cout << "$" << total;

	return 0;
}
