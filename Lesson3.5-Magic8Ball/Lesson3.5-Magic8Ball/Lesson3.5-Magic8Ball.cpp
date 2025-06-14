// Lesson3.5-Magic8Ball.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {

	//Magic Eight Ball Program
	std::cout << "MAGIC 8-BALL: \n\n";

	//Seed the random time:
	std::srand(time(NULL));

	int answer = std::rand() % 10;
	//std::cout << answer;

	switch (answer)
	{
	case 0:
		std::cout << "It is certain.\n";
		break;
	case 1:
		std::cout << "Look, I'm not your boss, do what you want.\n";
		break;
	case 2:
		std::cout << "Sleep on it.\n";
		break;
	case 3:
		std::cout << "What Would Henry Rollins Do?\n";
		break;
	case 4:
		std::cout << "It's in the refrigerator.\n";
		break;
	case 5:
		std::cout << "IDK??\n";
		break;
	case 6:
		std::cout << "Aren't you the adult here?\n";
		break;
	case 7:
		std::cout << "Outlook uncertain. Try again.\n";
		break;
	case 8:
		std::cout << "Call your mom.\n";
		break;
	case 9:
		std::cout << "The answer is No.\n";
		break;
	}

}