// Lesson2.2-QuadraticFormula.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

	int main() {

		double a, b, c, root1, root2;

		std::cout << "Enter a: ";
		std::cin >> a;

		std::cout << "Enter b: ";
		std::cin >> b;

		std::cout << "Enter c: ";
		std::cin >> c;

		root1 = ((b * -1) + std::sqrt((b * b) - (4 * a * c))) / (2 * a);
		root2 = ((b * -1) - std::sqrt((b * b) - (4 * a * c))) / (2 * a);

		std::cout << "\nA: " << a << std::endl 
			<< "B: " << b << std::endl 
			<< "C: " << c << std::endl 
			<< "Root 1: " << root1 << std::endl
			<< "Root 2: " << root2 << std::endl;

	}