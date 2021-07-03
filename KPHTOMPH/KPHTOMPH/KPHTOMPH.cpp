#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Table Header
    cout << setw(20) << "Kilometers Per Hour" << setw(20) << "Miles Per Hour" << endl;
    cout << "================================================" << endl;
    // Loop starting at 40 then incrementing to 120
    for (int kph = 40; kph < 120; kph += 10)
    {
        // Calculates MPH
        double mph = kph * 0.6214;
        // Adds the row to the table
        cout << setw(12) << kph << setw(24) << mph << endl;
    }
    return 0;
}

