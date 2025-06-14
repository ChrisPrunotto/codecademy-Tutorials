// Lesson6.1-UFO Hangman Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// A simple version of the game hangman, as a final project for Codecademy's functions course.
//Challenges:
//-- Vector of codewords for randomized gameplay (complete)
//-- Allow the players to play more than once (complete)
//-- Codeword confirmation upon winning / losing (complete)
//-- Make the game case insensitive (complete)
//-- Alert to already-guessed letters

#include <iostream>
#include "ufo_functions.h"
#include <time.h>
#include <string>
#include "Lesson6.1-UFO Hangman Game.h"

int main() {
	bool bQuit = false;
	while (!bQuit)
	{

		srand((unsigned int)time(NULL));

		int misses = 0;
		std::vector<char> incorrect;
		bool guess = false;
		char letter;

		std::vector<std::string> codewordArray = { "codecademy", "programming", "cplusplus", "allocation", "hangman", "weather", "central", "videogame", "function", "vector", "waveform", "reverberation", "delayed", "distortion", "insertion", "alignment" };

		std::string codeword = pick_codeword(codewordArray);
		codeword = convertToLowerCase(codeword);

		std::string answer = set_answer(codeword);

		greet();

		//std::cout << "Codeword: " << codeword << std::endl;
		//std::cout << "Answer: " << answer << std::endl;

		while (answer != codeword && misses < 7)
		{
			display_misses(misses);
			display_status(incorrect, answer);
			letter = display_guessPrompt();

			for (int i = 0; i < codeword.size(); i++) {
				if (letter == codeword[i]) {
					answer[i] = letter;
					guess = true;
				}
				else {
				}
			}
			if (guess == true) {
				std::cout << "Correct!";
			}
			else {
				std::cout << "Incorrect! The tractor beam pulls the person in further.";
				incorrect.push_back(letter);
				for (int i = 0; i < incorrect.size(); i++) {
					std::cout << incorrect[i];
				}
				misses++;
			}
			guess = false;
		}

		end_game(answer, codeword);
		bQuit = !playAgain();
	}

}
