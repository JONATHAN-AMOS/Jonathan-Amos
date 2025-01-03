#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // Game loop
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfTries++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number " << randomNumber << " in " << numberOfTries << " tries." << endl;
        }
    }

    return 0;
}
