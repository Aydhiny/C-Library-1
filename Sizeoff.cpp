#include <iostream>

int main() {

	std::string name = "Haus";
	double gpa = 2.5;
	char grade = 'F';
	bool student = true;
	char grades[] = { 'A', 'B', 'C', 'D' };
	std::string students[] = { "Spongebob", "Patrick", "Squidward" };

	std::cout << sizeof(gpa) << " Bytes" << std::endl;
	std::cout << sizeof(name) << " Bytes" << std::endl;
	std::cout << sizeof(grade) << " Bytes" << std::endl;
	std::cout << sizeof(student) << " Bytes" << std::endl;
	std::cout << sizeof(grades) << " Bytes" << std::endl;
	std::cout << sizeof(students)/sizeof(std::string) << " Elements" << std::endl;

	return 0;
}