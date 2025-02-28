#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed for random number generation
    number = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Welcome to Guess the Number!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);

    return 0;
}
