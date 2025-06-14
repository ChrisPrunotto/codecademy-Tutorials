// Lesson3.3-Pokedex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int number;
	std::cout << "Select a Pokemon (within the first 9): ";
	std::cin >> number;

	switch (number) {
	case 1:
		std::cout << "Bulbasaur\n";
		break;
	case 2:
		std::cout << "Ivysaur\n";
		break;
	case 3:
		std::cout << "Venusaur\n";
		break;
	case 4:
		std::cout << "Charmander\n";
		break;
	case 5:
		std::cout << "Charmeleon\n";
		break;
	case 6:
		std::cout << "Charizard\n";
		break;
	case 7:
		std::cout << "Squirtle\n";
		break;
	case 8:
		std::cout << "Wartortle\n";
		break;
	case 9:
		std::cout << "Blastoise\n";
		break;

	default:
		std::cout << "Unknown\n";
		break;
	}
}