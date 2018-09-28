#include <iostream>

using namespace std;

int main() {
	
	int randNumber, userAnswer;

	char x;
	
		do {
			randNumber = rand() % 1000;

			cout << "I have a number between 1 and 1000." << endl;
			cout << "Can you find my number? " << endl;
			cout << "Please type your first guess: ";

			do {
				cin >> userAnswer;
				if (userAnswer < randNumber)
					cout << "Too low. Try again: ";
				if (userAnswer > randNumber)
					cout << "Too high. Try again: ";
			} while (userAnswer != randNumber);
			cout << "Excellent! You guessed the number" << endl;

			cout << "Would you like to play again (Y or N) ?";
			cin >> x;
		} while ((x == 'Y') || (x == 'y'));
	
	return 0;
}
//Alberto Garib
