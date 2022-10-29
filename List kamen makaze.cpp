#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
	char player;
	char computer;

	player = getUserChoice();
	std::cout << "Your choice: ";
	showChoice(player);

	computer = getComputerChoice();
	std::cout << "Computer Choice: ";
	showChoice(computer);

	chooseWinner(player, computer);


	return 0;
}
char getUserChoice() {

	char player;
	std::cout << "Rock-Paper-Scissors Igrica" << std::endl;

	do {

		std::cout << "l = list" << std::endl;
		std::cout << "k = kamen" << std::endl;
		std::cout << "m = makaze" << std::endl;
		std::cin >> player;
	
	} while (player != 'l' && player != 'k' && player != 'm');

	return player;
	


	return 0;

}
char getComputerChoice() {

	srand(time(0));
	int num = rand() % 3 + 1;

	switch (num) {
	case 1: return 'k';
	case 2: return 'l';
	case 3: return 'm';
	}

	return 0;

}
void showChoice(char choice) {

	switch (choice) {
	case 'k': std::cout << "Kamen" << std::endl;
		break;
	case 'l': std::cout << "List" << std::endl;
		break;
	case 'm': std::cout << "Makaze" << std::endl;
		break;
	}

}
void chooseWinner(char player, char computer) {

	switch (player) {
	case 'k': if (computer == 'k') {
		std::cout << "Nerijeseno" << std::endl;
	}
			else if (computer == 'l') {
		std::cout << "Pobjeda!" << std::endl;
	}
			else {
		std::cout << "Gubis!" << std::endl;
		break;

	}
	case 'l': if (computer == 'l') {
		std::cout << "Nerijeseno" << std::endl;
	}
			else if (computer == 'k') {
		std::cout << "Pobjeda!" << std::endl;
	}
			else {
		std::cout << "Gubis!" << std::endl;
		break;

	}
	case 'm': if (computer == 'm') {
		std::cout << "Nerijeseno" << std::endl;
	}
			else if (computer == 'l') {
		std::cout << "Pobjeda!" << std::endl;
	}
			else {
		std::cout << "Gubis!" << std::endl;
		break;

	}
	
	

}