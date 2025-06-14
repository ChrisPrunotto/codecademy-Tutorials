// Lesson5.2-WhaleTranslator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

int main() {
	/*Whale translator: 
	Given an input string, remove all non-vowels. Double any E's or U's.

	ex: Turpentine and Turtles ---> uueeieeauuee

	[Challenge:
	- account for mixed case. (HellO world --> eeOo)
	- leave punctuation intact. (HellO, World --> eeO,o)
	- any exclamation points double the previous vowel. (HellO, World! --> eeO,oo!)
	*/

	std::string input;
	std::cout << "What would you like to translate?: ";
	std::getline(std::cin, input);

	std::cout << "Input text: " << input << std::endl;

	std::vector<char> vowels = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', '!', '.', ',', '?', ':', ';', '-', '_', '\'', '\"' };
	std::vector<char> result;

	for (int i = 0; i < input.size(); i++)
	{
		for (int v = 0; v < vowels.size(); v++)
		{
			if (input[i] == vowels[v])
			{
				if (input[i] == '!')
				{
					char lastchar = result[result.size() - 1];
					result.push_back(lastchar);
				}
				result.push_back(input[i]);
			}
		}
		if (input[i] == 'e' || input[i] == 'E' || input[i] == 'u' || input[i] == 'U')
		{
			result.push_back(input[i]);
		}
	}

	std::cout << "\n-----\nResult\n------\n";

	for (int x = 0; x < result.size(); x++)
	{
		std::cout << result[x];
	}



}