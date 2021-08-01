#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function Prototype
int getPlayerChoice();

const string options[3] = { "Rock", "Paper", "Scissors" };

int main()
{
    char choice;
    srand((unsigned int)time(NULL));

    cout << "Let's play Rock Paper Scissors!" << endl;
    // Prints instructions
    cout << "Player to get 5 points will win the game" << endl;
    cout << "Instructions: Enter the number that corresponds to your choice" << endl;
    cout << "Ready to begin? Press Enter to begin!";
    cin.get();
    cout << "" << endl;

    // Starts the rock paper Sisscors game under a do loop just incase the player wants to play again
    do {
        // Choices
        int computerChoice, playerChoice;

        // Scores with starting value of 0
        int computerScore = 0, playerScore = 0;

        do {
            // Get random number from one to three
            computerChoice = 1 + rand() % 3;

            // Get Player Choice
            playerChoice = getPlayerChoice();
            cout << "" << endl;

            // Both choice equals? That's cool say it's a tie
            if (computerChoice == playerChoice) {
                cout << "It's a tie!" << endl;
            }
            // Computer Beat Computer? Run these
            else if ((playerChoice == 1 && computerChoice == 2) || (playerChoice == 2 && computerChoice == 3) || (playerChoice == 3 && computerChoice == 1)) {
                // Prints result
                cout << "The Computer has chosen " << options[computerChoice - 1] << " and won!" << endl << endl;
                // Adds one score to the computer
                computerScore++;
                // Prints Scoreboard
                cout << endl;
                cout << "Computer Score:" << computerScore << endl;
                cout << "Player Score:" << playerScore << endl << endl;
            }
            else {
                // Prints result
                cout << "The Computer has chosen " << options[computerChoice - 1] << " and lost!" << endl << endl;
                // Adds one score to the computer
                playerScore++;
                // Prints Scoreboard
                cout << "Computer Score:" << computerScore << endl;
                cout << "Player Score:" << playerScore << endl << endl;
            }
        } while (computerScore < 5 && playerChoice < 5);
        // Continue to run this until the one player has 5 points
        if (computerScore > playerScore)
            cout << "You Won!" << endl << endl;
        else
            cout << "The Computer Won!" << endl << endl;

        // Asks the player if they would like to play Rock Paper Scissors again
        cout << "Would you like to play it again? (Enter y/n)";
        cin >> choice;
        if (choice != 'y' && choice != 'n') {
            cout << "Incorrect Choice... Would you like to play it again? (Enter y/n)";
            cin >> choice;
        }
    } while (choice == 'y');

    return 0;
}

// THis function prompts the user to pick a choice
int getPlayerChoice() {
    int choice = NULL;
    cout << "Pick a option" << endl;
    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" << endl;
    cout << "Choice:";
    cin >> choice;
    if (choice > 3 && choice < 0) {
        cout << "Pick a correct option" << endl;
        cout << "1 - Rock" << endl;
        cout << "2 - Paper" << endl;
        cout << "3 - Scissors" << endl;
        cout << "Choice:";
        cin >> choice;
    }

    return choice;
}

