#pragma once
#include <iostream>
#include <vector>

class ufo_functions
{
};

void greet();

std::string pick_codeword(std::vector<std::string> codewordArray);

std::string set_answer(std::string codeword);

std::string convertToLowerCase(std::string input);

void display_status(std::vector<char> incorrect, std::string answer);

char display_guessPrompt();

void end_game(std::string answer, std::string codeword);

bool playAgain();

void display_misses(int misses);