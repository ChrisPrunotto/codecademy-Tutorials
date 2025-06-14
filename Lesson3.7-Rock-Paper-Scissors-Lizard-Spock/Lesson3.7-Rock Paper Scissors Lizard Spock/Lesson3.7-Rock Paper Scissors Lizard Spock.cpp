// Lesson3.7-Rock Paper Scissors Lizard Spock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>

int main()
{
	/*Let's play a game of Rock Paper Scissors Lizard Spock (based on the TV show, Big Bang Theory).*/
	int userChoice = 0;
	std::string userChoiceString, computerChoiceString;

	srand(time(NULL));
	int computerChoice = rand() % 5 + 1; //+1 is to avoid zero indexed counting for the computer's choice.

	std::cout << "====================\n Rock, Paper, or Scissors?\n====================\n1) Rock \n2) Paper \n3) Scissors \n4) Lizard \n5) Spock \n \nShoot!: ";

	std::cin >> userChoice;

	switch (userChoice)
	{
	case 1: userChoiceString = "Rock"; break;
	case 2: userChoiceString = "Paper"; break;
	case 3: userChoiceString = "Scissors"; break;
	case 4: userChoiceString = "Lizard"; break;
	case 5: userChoiceString = "Spock"; break;
	default: userChoiceString = "Invalid"; break;
	}

	switch (computerChoice)
	{
	case 1: computerChoiceString = "Rock"; break;
	case 2: computerChoiceString = "Paper"; break;
	case 3: computerChoiceString = "Scissors"; break;
	case 4: computerChoiceString = "Lizard"; break;
	case 5: computerChoiceString = "Spock"; break;
	default: computerChoiceString = "Invalid"; break;
	}
	std::string result;

	switch (userChoice)
	{
		//rock
	case 1:
		if (computerChoice == 4 || computerChoice == 3)
		{
			result = "You win!";
		}
		else if (computerChoice == 2 || computerChoice == 5)
		{
			result = "You lose!";
		}
		else
		{
			result = "Draw";
		}
		break;
		//paper
	case 2:
		if (computerChoice == 1 || computerChoice == 5)
		{
			result = "You win!";
		}
		else if (computerChoice == 3 || computerChoice == 4)
		{
			result = "You lose!";
		}
		else
		{
			result = "Draw";
		}
		break;
		//scissors
	case 3:
		if (computerChoice == 2 || computerChoice == 4)
		{
			result = "You win!";
		}
		else if (computerChoice == 5 || computerChoice == 1)
		{
			result = "You lose!";
		}
		else
		{
			result = "Draw";
		}
		break;
		//lizard
	case 4:
		if (computerChoice == 5 || computerChoice == 2)
		{
			result = "You win!";
		}
		else if (computerChoice == 1 || computerChoice == 3)
		{
			result = "You lose!";
		}
		else
		{
			result = "Draw";
		}
		break;
		//spock
	case 5:
		if (computerChoice == 3 || computerChoice == 1)
		{
			result = "You win!";
		}
		else if (computerChoice == 4 || computerChoice == 2)
		{
			result = "You lose!";
		}
		else
		{
			result = "Draw";
		}
		break;
	}

	std::cout << "User Choice: " << userChoiceString << "\nComputer Choice: " << computerChoiceString << "\n\n" << result << std::endl;

 
}