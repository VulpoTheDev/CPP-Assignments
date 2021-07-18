// This program will take the possbities of winning a small lottery
#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
void getLotteryInformation(int&, int&);
long int computeWays(int, int);
long int factorial(int);

int main()
{
    int inputPickFrom, inputPicks;
    long int ways;
    // Describes the program
    cout << "This program will tell you your probability of winning \"Little Lotto\" ." << endl;
    // Get the Lottery Info (the args provided will change)
    getLotteryInformation(inputPickFrom, inputPicks);
    // Calculates the ways
    ways = computeWays(inputPickFrom, inputPicks);
    // Print the possibility of winning
    cout << fixed << showpoint << setprecision(4);
    cout << "Your chance in winning the lottery is 1 chance in " << ways << endl;
    cout << "This probability of " << (1.0 / ways) << endl;
    return 0;
}

// This will get th user input and modify the arguments given to what's been inputted
void getLotteryInformation(int &inputPickFrom, int &inputPicks)
{
    // Prompts the user for a number wanting to pick from
    cout << "How many numbers (1-12) are there to pick from: ";
    cin >> inputPickFrom;
    // Checking
    while (inputPickFrom > 12 || inputPickFrom < 1) {
        cout << "Invalid Number, Please input the correct number (1-12) to pick from: ";
        cin >> inputPickFrom;
    }
    // Prompt the user how many numbers they must play
    cout << "How many numbers must you pick to play: ";
    cin >> inputPicks;
    // Checking
    while (inputPicks < 1 || inputPickFrom < inputPicks) {
        cout << "Invalid Number, Please input the correct number you must pick to play: ";
        cin >> inputPickFrom;
    }
        
    return;
}

// Calculates the possible sets
long int computeWays(int n, int k)
{
    return (factorial(n) / factorial(k) / factorial(n - k));
    
}

// Get the Facorial Total of a give number
long int factorial(int number) {
    // Starting
    long int total = 1;
    // Loops until i (which is assigned to the give number) reaches 0
    for (int i = number; i >= 1; i--){
        // Updates the total
        total *= i;
    }
    // Returns the Factorial of the number
    return total;
}