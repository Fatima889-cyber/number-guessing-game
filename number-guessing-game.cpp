#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()

using namespace std;

int main() {
    char playAgain;

    srand(time(0)); // Initialize random seed

    do {
        int number = rand() % 100 + 1; // Random number between 1-100
        int guess;
        int attempts = 0;

        cout << "Welcome to Number Guessing Game!" << endl;
        cout << "Guess a number between 1 and 100." << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) {
                cout << "Too high! Try again." << endl;
            }
            else if (guess < number) {
                cout << "Too low! Try again." << endl;
            }
            else {
                cout << "Congratulations! You guessed the number in " 
                     << attempts << " attempts." << endl;
            }
        } while (guess != number);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;
    return 0;
}

