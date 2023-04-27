/**
	Filename: GuessMyLetter.cpp
	Author: Arnesha Nicholas
	Date: 9/14/2021

	This program runs the computer guessing game.
*/


#include <iostream>
#include "time.h"

using namespace std;

// returns one random integer between 1-26
int getPosition() {
	int position = 1 + (rand() % 26);
	return position;
}

// returns one random alphabet, between A-Z, depending on random int from getPosition
char getLetter() {
	int index = getPosition();
	char alph[26] = { '\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	return alph[index];
}

// runs the game
void runGame() {
	char guessedChar, playChoice = 'Y';
	// loops till play
	while (playChoice == 'Y' || playChoice == 'y') {
		// generates random letter
		char randomChar = getLetter();
		std::cout << "I am thinking of a letter. What is your letter?[A-Z]: ";
		// takes input from user
		std::cin >> guessedChar;

		
		// if users guess is equal to randomChar, prints success
		while (guessedChar != randomChar)
		{
			//cout << "Congratulations you guessed my letter." << endl;
		//}
		// if users guess is less than the randomChar, prints its too low
			if (guessedChar < randomChar) {
				std::cout << "Your guess is too low" << endl;
			}
			// else prints its too high
			else {
				std::cout << "Your guess is too high" << endl;
			}
			// asks user if he wants to play again
			std::cout << "Enter a new letter: ";
			std::cin >> guessedChar;
		}
		std::cout << "Congratulations you guessed my letter." << endl;
		std::cout << "Do you want to play again [Y/N]: ";
		
		std::cin >> playChoice;
		std::cout << endl;
	}
	// if user says no, prints goodbye
	std::cout << "Goodbye!" << endl;
}

int main(void) {
	// makes sure, rand produces random int
	srand((unsigned)time(NULL));
	// runs game
	runGame();
	// system("pause");
	return 0;
}
