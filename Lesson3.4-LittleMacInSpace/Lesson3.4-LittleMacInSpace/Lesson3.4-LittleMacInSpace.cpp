// Lesson3.4-LittleMacInSpace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

	int main() {
		double earthWeight, weightMultiplier;
		int planet;
		std::string planetName;

		std::cout << "Let's get ready to rumble!\n\n What is your weight (on Earth)?: ";
		std::cin >> earthWeight;

		std::cout << "What planet (number from the sun) are you going to fight on?: ";
		std::cin >> planet;

		switch (planet)
		{
		case 1:
			planetName = "Mercury";
			weightMultiplier = 0.37;
			break;
		case 2:
			planetName = "Venus";
			weightMultiplier = 0.90;
			break;
		case 3:
			planetName = "Earth";
			weightMultiplier = 1;
			break;
		case 4:
			planetName = "Mars";
			weightMultiplier = 0.37;
			break;
		case 5:
			planetName = "Jupiter";
			weightMultiplier = 2.52;
			break;
		case 6:
			planetName = "Saturn";
			weightMultiplier = 1.06;
			break;
		case 7:
			planetName = "Uranus";
			weightMultiplier = .88;
			break;
		case 8:
			planetName = "Neptune";
			weightMultiplier = 1.12;
			break;
		case 9:
			planetName = "Pluto";
			weightMultiplier = 0.67;
			break;

		default:
			planetName = "Unknown";
			weightMultiplier = 0;
			break;
		}

		std::cout << "On " << planetName << ", Little Mac would weigh " << earthWeight * weightMultiplier << "." << std::endl;
	}