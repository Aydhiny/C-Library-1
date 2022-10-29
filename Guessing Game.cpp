#include <iostream>
#include <math.h>

int main() {

	int num = 0;
	int guess = 0;
	int tries = 0;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "****POGODI BROJ *******" << std::endl;

	do {

		std::cout << "Enter a guess through 1 to 100 ";
		std::cin >> guess;
		tries++;

		if (guess > num) {
			std::cout << "Too high!" << std::endl;
			}
		else if (guess < num) {
			std::cout << "Too low!" << std::endl;
			}
		else {
			std::cout << "CORRECT! # of tries: " << tries << std::endl;

			}
		
	} while (guess != num);

	return 0;

}