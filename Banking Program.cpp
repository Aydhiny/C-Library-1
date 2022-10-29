#include <iostream>


void showbalance(double balance);
double deposit();

using namespace std;

int main() {

	double balance = 1000;
	int choice = 0;
	int depo;
	int withdrawal;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << "Enter your choice" << std::endl;
			std::cout << "1 = Check balance" << std::endl;
			std::cout << "2 = Deposit Money" << std::endl;
			std::cout << "3 = Withdraw Money" << std::endl;
			std::cin >> choice;

			switch (choice) {
			case 1:
				std::cout << "Your balance is: " << balance << std::endl;
				break;
			case 2:
				std::cout << "Input the amount you would like to deposit: ";
				std::cin >> depo;
				balance = balance + depo;
				std::cout << "You have deposited: " << depo << " dollars" << std::endl;
				break;
			case 3:
				std::cout << "Input the amount you would like to withdraw: " ;
				std::cin >> withdrawal;
				balance = balance - withdrawal;
				std::cout << "You have withdrawed: " << withdrawal << " dollars" << std::endl;
				break;
			default:
				std::cout << "Please insert a valid command" << std::endl;
			}
		}
	}
	if (balance < 0) {
		std::cout << "Insufficient Funds!";
		return 0;
	}

	return 0;
}