// Lesson3.6-SortingHat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {

	//Sorting Hat Program

	int gryffindorPoints = 0, hufflepuffPoints = 0, ravenclawPoints = 0, slytherinPoints = 0;
	int answer1, answer2, answer3, answer4;

	std::cout << "Welcome to the Sorting Hat Quiz!";

	std::cout << "\n--\nQ1) When I'm dead, I want people to remember me as: \n    1) The Good\n    2) The Great\n    3) The Wise\n    4) The Bold \nEnter Your Selection: ";
	std::cin >> answer1;

	switch (answer1) {
	case 1:
		hufflepuffPoints++;
		break;
	case 2:
		slytherinPoints++;
		break;
	case 3:
		ravenclawPoints++;
		break;
	case 4:
		gryffindorPoints++;
		break;
	default:
		std::cout << "Invalid input.";
		break;
	}

	std::cout << "\n--\nQ2) Dawn or Dusk? \n    1) Dawn\n    2) Dusk \nEnter Your Selection: ";
	std::cin >> answer2;

	switch (answer2) {
	case 1:
		gryffindorPoints++;
		ravenclawPoints++;
		break;
	case 2:
		hufflepuffPoints++;
		slytherinPoints++;
		break;
	default:
		std::cout << "Invalid input.";
		break;
	}

	std::cout << "\n--\nQ3) Which kind of instrument most pleases your ear? \n    1) The violin \n    2) The trumpet\n    3) The piano\n    4) The drum \nEnter Your Selection: ";

	std::cin >> answer3;

	switch (answer3) {
	case 1:
		slytherinPoints++;
		break;
	case 2:
		hufflepuffPoints++;
		break;
	case 3:
		ravenclawPoints++;
		break;
	case 4:
		gryffindorPoints++;
		break;
	default:
		std::cout << "Invalid input.";
		break;
	}

	std::cout << "\n--\nQ4) Which road tempts you most?  \n    1) The wide, sunny, grassy lane \n    2) The narrow, dark, lantern-lit alley\n    3) The twisting, leaf-strewn path through woods \n    4) The cobbled street lined with ancient buildings \nEnter Your Selection: ";

	std::cin >> answer4;

	switch (answer4) {
	case 1:
		hufflepuffPoints++;
		break;
	case 2:
		slytherinPoints++;
		break;
	case 3:
		gryffindorPoints++;
		break;
	case 4:
		ravenclawPoints++;
		break;
	default:
		std::cout << "Invalid input.";
		break;
	}

	std::string house;
	int max = 0;

	if (gryffindorPoints > max)
	{
		max = gryffindorPoints;
		house = "Gryffindor";
	}
	if (hufflepuffPoints > max)
	{
		max = hufflepuffPoints;
		house = "Hufflepuff";
	}
	if (ravenclawPoints > max)
	{
		max = ravenclawPoints;
		house = "Ravenclaw";
	}
	if (slytherinPoints > max)
	{
		max = slytherinPoints;
		house = "Slytherin";
	}

	std::cout << "\n--\nYou've been placed in house " << house << "!\n";
}