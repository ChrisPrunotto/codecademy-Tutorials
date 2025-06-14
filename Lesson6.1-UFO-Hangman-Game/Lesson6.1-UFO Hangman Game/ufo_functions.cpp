#include "ufo_functions.h"
#include <iostream>
#include <vector>
#include <string>

// Define functions
void greet() {
	std::cout << "=============\nUFO: The Game\n=============\nInstructions: Save your friend from alien abduction by guessing the letters in the codeword!\n\n";
}

std::string pick_codeword(std::vector<std::string> codewordArray)
{
	return codewordArray[rand() % codewordArray.size()];
}

std::string set_answer(std::string codeword) {
	std::string answer;
	for (int i = 0; i < codeword.size(); i++)
	{
		answer.push_back('_');
	}
	return answer;
}

std::string convertToLowerCase(std::string input)
{
	std::string lowercase;
	for (int i = 0; i < input.size(); i++)
	{
		lowercase.push_back(tolower(input[i]));
	}
	return lowercase;
}

void display_status(std::vector<char> incorrect, std::string answer)
{
	std::cout << "Incorrect Guesses: ";
	for (int i = 0; i < incorrect.size(); i++) {
		std::cout << incorrect[i] << " ";
	}
	std::cout << "\n";

	std::cout << "Codeword: ";
	for (int i = 0; i < answer.size(); i++) {
		std::cout << answer[i];
	}
}

char display_guessPrompt() {
	char letter;
	std::cout << "\nPlease enter your guess: ";
	std::cin >> letter;

	while (!isalpha(letter)) {
		std::cout << "\nThat is not a letter. Please try again: ";
		std::cin >> letter;
	}
	letter = tolower(letter);

	return letter;
}

void end_game(std::string answer, std::string codeword)
{
	std::cout << "\n";
	if (answer == codeword) {
		std::cout << "Hooray! You saved the person and earned a Medal of Honor!" << std::endl;
		std::cout << "\nThe codeword was..." << codeword << "!";
	}
	else {
		std::cout << "Oh no! The UFO just flew away with another person!" << std::endl;
		std::cout << "\nThe codeword was..." << codeword << "!";
	}
	std::cout << "\n";
}

bool playAgain() {
	char playAgain;
	bool prompt = true;
	std::cout << "Would you like to play again? Y/N: ";
	std::cin >> playAgain;
	if (isalpha(playAgain) && prompt == true) {
		playAgain = toupper(playAgain);
		if (playAgain == 'Y') {
			prompt = false;
			return true;
		}
		else if (playAgain == 'N') {
			prompt = false;
			return false;
		}
		else {
			prompt = true;
		}
	}

	playAgain = toupper(playAgain);
}


void display_misses(int misses) {

	if (misses == 0 || misses == 1) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /   0   \\      / `-----------'  \n";
		std::cout << "            /  --|--  \\    /                 \n";
		std::cout << "           /     |     \\                     \n";
		std::cout << "          /     / \\     \\                   \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 2) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  0  \\        (  Send help! ) \n";
		std::cout << "             / --|-- \\      / `-----------'  \n";
		std::cout << "            /    |    \\    /                 \n";
		std::cout << "           /    / \\    \\                    \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 4) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  |  \\        (  Send help! ) \n";
		std::cout << "             /  / \\  \\      / `-----------' \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 5) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              / / \\ \\        (  Send help! )\n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 6) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}

}