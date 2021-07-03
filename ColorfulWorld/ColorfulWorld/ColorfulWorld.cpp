#include <iostream>
#include <windows.h> 

using namespace std;

// COLORS
// 0 Black     8 "Bright" Black
// 1 Blue      9 Bright Blue
// 2 Green     10 Bright Green
// 3 Cyan      11 Bright Cyan
// 4 Red       12 Bright Red
// 5 Purple    13 Bright Purple
// 6 Yellow    14 Bright Yellow
// 7 White     15 Bright White

// This program will prompt the user whether they would like to see the Colorful Strings or Alhablets
int main()
{
    // Variable and Screen for colors
    char choice, retry;
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Ask the user what program they wanna run, the colorful strings or alphabets
    do
    {
        cout << "What would you like to see?" << endl;
        cout << "A - Colorful lines or B - Colorful Alphabets: ";
        cin >> choice;

        // Input Validations
        while (tolower(choice) != 'a' && tolower(choice) != 'b')
        {
            cout << "Incorrect input.";
            cout << "What would you like to see?";
            cout << "A - Colorful lines or B - Colorful Alphabets: ";
            cin >> choice;
        }

        // If a is the choice then it'll run the colorful string
        if (tolower(choice) == 'a') {
            for (int i = 0; i < 16; i++)
            {
                SetConsoleTextAttribute(screen, i);
                cout << "This is amazing, the posibilities!" << endl;
                cout << "Hello world." << endl;
            }
        }

        // otherwise it'll run the colorful alphabets
        else {
            int color = 13; // Start of with bright purple
            for (char letter = 'A'; letter <= 'Z'; letter++)
            {
                SetConsoleTextAttribute(screen, color);
                cout << letter << " " << endl;
                color += 2;
                if (color > 14) {
                    color = 5;
                }
            }
        }

        // Resets to default color
        SetConsoleTextAttribute(screen, 7);

        // Asks the user if they would like to run this program again
        cout << "Would you like to run this program again? (y/n): ";
        cin >> retry;

        // Validation
        while (tolower(retry) != 'y' && tolower(retry) != 'n')
        {
            cout << "Incorrect Value, Would you like to run this program again? (y/n): ";
            cin >> retry;
        }
      // If the user wants to run the program again, it'll start the loop execution again
    } while (tolower(retry) == 'y');
    return 0;
}

