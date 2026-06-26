#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Seed for random number generation
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number) {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < number) {
            cout << "Too Low! Try Again." << endl;
        }
        else {
            cout << " Congratulations! You guessed the number." << endl;
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}