#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

// Function Prototypes
void displayMenu();
void generateJackOLantern();
int getColorChoice();

// Global Variables
const int QUIT = 6, MAX = 6;

int main()
{
    int colorChoice;
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    do {
        // Resets the Console Text Color
        SetConsoleTextAttribute(screen, 7);
        // Clears the terminal
        system("cls");
        // Displays the Color Choices
        displayMenu();
        // Gets the color choice from the getColorChoice function
        colorChoice = getColorChoice();
        // Sets the terminal color to whatever the color choice + 9 is
        SetConsoleTextAttribute(screen, colorChoice + 9);
        // Generates the JackOLantern
        generateJackOLantern();

    } while (colorChoice != QUIT);
    // Stops the program if the color choice is 6 (to quit)
    return 0;
}

/*
    This will display the color choices to the user
*/
void displayMenu() {
    // Rows
    string choiceRowOne = "1 - Green  | 2 - Blue   | 3 - Red";
    string choiceRowTwo = "4 - Purple | 5 - Yellow | 6 - Quit";
    // Display the choices
    cout << "Color Choices" << endl 
    << choiceRowOne << endl 
    << choiceRowTwo << endl 
    << "Make your selection: ";
}

/*
    This will process the choice and if for some reason it's incorrect
    This function will kindly make sure that the user inputs the right number
*/
int getColorChoice() {
    int choice;
    cin >> choice;
    // If the choice is not from 1-6 it'll loop until the user inputs the correct number
    while (choice < 0 || choice > MAX) {
        // Clears the console, say their choice is incorrect, and show the menu
        system("cls");
        cout << "Incorrect input! Please make sure your input the right number";
        displayMenu();
        cin >> choice;
    }
    return choice;
}

/*
    Make the Jack o lantern
*/
void generateJackOLantern() {
    system("cls");
    cout << " " << endl;
    cout << " " << endl;
    cout << " ________________ " << endl;
    cout << "|                |" << endl;
    cout << "|   ^       ^    |" << endl;
    cout << "|       o        |" << endl;
    cout << "|  \\_________/   |" << endl;
    cout << "|_______________ |";
    cout << endl;
    cout << "Press ENTER to Return to the MENU";
    cin.get();
    cin.get();
}