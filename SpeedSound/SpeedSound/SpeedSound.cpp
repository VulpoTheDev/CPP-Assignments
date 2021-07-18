#include <iostream>

using namespace std;

// Prototypes
void displayMenu();
int getSelection();
double getFeetSoundWaveTraveled();
double calculateTime(int, double);

int main()
{
    int selection;

    // Run once and continue running until the option is set to quit
    do {
        // Display the options
        displayMenu();
        // Get the user's selection
        selection = getSelection();
        // If the selection is not set to quit it'll get the feet travel and calculates the time otherwise it'll end the loop
        if (selection != 4) {
            // Get the Feets Traveled
            double feetTraveled = getFeetSoundWaveTraveled();
            // Calculate the time it takes based on Selection and Feet traveled
            double timeTaken = calculateTime(selection, feetTraveled);
            // Prints the Time it'll take based on their selection and feet traveled
            cout << "It'll take " << timeTaken << " second" << (timeTaken > 1 ? "s " : " ") << "for " << (selection == 1 ? "air" : selection == 2 ? "water" : "steel") << " to travel " << feetTraveled << endl;
        }
    } while (selection != 4);
    return 0;
}

// Dislays the Selection Menu provided 4 options
void displayMenu() {
    cout << "Please choose a selection:" << endl;
    cout << "1 - Air | 2 - Water | 3 - Steel | 4 - Quit" << endl;
    cout << "Selection: ";
    return;
}

// Gets the user's selection
int getSelection() {
    int selection;
    cin >> selection;
    // Checking
    while (selection > 4 || selection < 0) {
        cout << "Incorrect Selection, Please choose a selection:" << endl;
        displayMenu();
        cin >> selection;
    }
    // Returns Selection
    return selection;
}

// Prompts the user to provide the amount of feets traveled
double getFeetSoundWaveTraveled() {
    double feets;
    cout << "Please input the amount of feet a sound wave will travel: ";
    cin >> feets;
    // Checking
    while (feets < 0) {
        cout << "Incorrect Selection, Please input the amount of feet a sound wave will travel: ";
        cin >> feets;
    }
    // Return the Feets Traveled
    return feets;
}


// Calculates the time it takes (specified selection) to take until it reaches (feet traveled)
double calculateTime(int selection, double feetsTraveled) {
    double time;
    switch (selection) {
    case 1:
        // Air
        time = feetsTraveled / 1100;
        break;
    case 2:
        // Water
        time = feetsTraveled / 4900;
        break;
    case 3:
        // Steel
        time = feetsTraveled / 16400;
        break;
    }
    return round(time * 10000)/10000;
}