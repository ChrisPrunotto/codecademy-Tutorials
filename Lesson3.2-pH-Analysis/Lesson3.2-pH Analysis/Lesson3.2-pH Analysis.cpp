// Lesson3.2-pH Analysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double ph;
	std::cout << "Enter the pH value: ";
	std::cin >> ph;

	// Write the if, else if, else here:
	if (ph > 7)
	{
		std::cout << "Basic\n";
	}
	else if (ph < 7)
	{
		std::cout << "Acidic\n";
	}
	else
	{
		std::cout << "Neutral\n";
	}
}

