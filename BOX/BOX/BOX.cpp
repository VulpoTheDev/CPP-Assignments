#include <iostream>

using namespace std;

int main()
{
    // Initalize the variables
    int numberOne, numberTwo;
    char retry;

    do {

        // Prompts the user for first number
        cout << "Please provide a number that's between 2 and 10 for the width of the box: ";
        cin >> numberOne;
        // Validation
        while (numberOne > 10 || numberOne < 2) {
            cout << "Not a valid number, Please provide a number that's between 2 and 10 for the width of the box: ";
            cin >> numberOne;
        }

        // Prompts the user for second number
        cout << "Please provide a second number that's between 2 and 10 for the height of the box: ";
        cin >> numberTwo;
        // Validation
        while (numberTwo > 10 || numberTwo < 2) {
            cout << "Not a valid number, Please provide a second number that's between 2 and 10 for the height of the box: ";
            cin >> numberTwo;
        }

        // Basically this for is for the rows (numberTwo)
        for (int i = 0; i < numberTwo; i++) {
            for (int j = 0; j < numberOne; j++) {
                cout << 'x';
            }
            cout << endl;
        }

        // Asks the user if the would like to run the program again
        cout << "Would you like to run the program again? (y/n): ";
        cin >> retry;

        // Validation
        while (tolower(retry) != 'y' && tolower(retry) != 'n') {
            cout << "Invalid Input, Would you like to run the program again? (y/n): ";
            cin >> retry;
        }
        // If the user decides to retry the program the loop will run the program again
    } while (tolower(retry) == 'y');

    return 0;
}

