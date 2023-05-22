#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	// Seed the random number generator
	srand(time(0)); 

	// Generate random target number between 1-100
	int targetNumber = rand() % 100 + 1; 
	int guess;
	int tries = 0;

	cout<<"Welcome to the number guessing game!" << endl;

	do {
		cout<<"Guess number (1-100): ";
		cin>>guess;
		tries++;

		if(guess < targetNumber) {
			cout<<"Too low, guess higher! " << endl;
		} else if ( guess > targetNumber) {
			cout<<"Too high, guess lower! " << endl;
		} else {
			cout<<"Correct! Amazing!"<< endl << tries << "tries" << endl;
		}
	} while (guess != targetNumber);

	return 0;

}