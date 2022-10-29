#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() 
{

	string firstName;
	string lastName;

	std::cout << "Kako se zoves i prezivas ";
	getline(cin, firstName);

	std::cout << "Kako ti se jaran zove i preziva? ";
	getline(cin, lastName);

	std::cout << "Veliki pozdrav za " << firstName + " " + lastName;


	return 0;
}
