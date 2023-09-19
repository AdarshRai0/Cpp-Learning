#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int computerChoice;
    int userChoice;
    char playAgain;

    do {
        // Get user's choice
        cout << "Rock, Paper, or Scissors? (0 for Rock, 1 for Paper, 2 for Scissors): ";
        cin >> userChoice;

        // Validate user's choice
        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice. Please choose 0, 1, or 2." << endl;
            continue;
        }

        // Generate a random choice for the computer (0 for Rock, 1 for Paper, 2 for Scissors)
        computerChoice = rand() % 3;

        // Output the computer's choice
        cout << "Computer chose: ";
        switch (computerChoice) {
            case 0:
                cout << "Rock";
                break;
            case 1:
                cout << "Paper";
                break;
            case 2:
                cout << "Scissors";
                break;
        }
        cout << endl;

        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        // Ask if the user wants to play again
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
