#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // A yard mulch is 22.00 and that would be final
    const double CUBIC_YARD_MULCH_PRICE = 22.00;

    // Initalize Variables
    double squareFeet, cubicYards, cubicFeet, total;
    int depth;

    // Prompts the user how much mulch they would like to have covered
    cout << "How much square feet would you like covered: ";
    cin >> squareFeet;

    // Prompts the user how deep they want to mulch to be
    cout << "How deep should the mulch you're wanting to cover be: ";
    cin >> depth;

    // Calculate the data
    cubicFeet = squareFeet * (depth / 12.0);
    cubicYards = cubicFeet / 27;
    total = cubicYards * CUBIC_YARD_MULCH_PRICE;

    // Displays the data
    cout << "Cubic Yards: " << cubicYards << endl;
    // Sets the precision to 2 to format the money
    cout << setprecision(2);
    cout << "Price per Cubic Yard: $" << fixed << CUBIC_YARD_MULCH_PRICE << endl;
    cout << "Total Price: $" << fixed << total;

    return 0;

}