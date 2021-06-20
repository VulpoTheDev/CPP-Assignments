#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Varibles the tempatureConverting used for Celsius and tempatureConverted used for Fahrenheit
    double tempatureConverting, tempatureConverted;
    // Prompts the user to provide the tempature in Celsius so it'll be converted to Fahrenheit
    cout << "Please input the Temperature in Celsius that you would like to be converted to Fahrenheit: ";
    cin >> tempatureConverting;
    // Calculates the tempature and assign it to the tempatureConverted variable
    tempatureConverted = (tempatureConverting * 9 / 5) + 32;
    // Sets the precision to 2 so it'll like this: 67.12F
    cout << setprecision(2);
    // Displays the Celsius converted to Fahrenheit
    cout << fixed << tempatureConverting << "C converted to Fahrenheit will be " << fixed << tempatureConverted << "F";

    return 0;
}