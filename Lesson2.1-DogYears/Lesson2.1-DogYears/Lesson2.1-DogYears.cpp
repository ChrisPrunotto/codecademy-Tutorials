// Lesson1.3-DogYears.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

int main()
{
	int dog_age;
	std::string dog_name;

	//first two years are 21 years.
	int early_years = 21;
	//each following year is 4 human years.
	int later_years;
	int human_years;

	std::cout << "What is the dog's name? ";
	std::cin >> dog_name;

	std::cout << "How old is the dog? ";
	std::cin >> dog_age;

	//later years are 4 years each.
	later_years = (dog_age - 2) * 4;

	//early years + later years = human equivalant.
	human_years = early_years + later_years;

	std::cout << "My name is " << dog_name << "! I am " << human_years << " old. \n";

}