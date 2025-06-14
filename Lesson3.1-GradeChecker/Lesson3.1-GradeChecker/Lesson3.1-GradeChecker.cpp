// Lesson3.1-GradeChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	int grade;
	std::cout << "What is your grade?: ";
	std::cin >> grade;

	if (grade > 60) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
}