#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variables
    const double DOLLAR = 1.00, PENNY = 0.01, NICKLE = 0.05, DIME = 0.10, QUARTER = 0.25;
    int pennyCount, nickleCount, dimeCount, quarterCount;

    // Prompts the user to put a certain amount of coins that makes up a dollar
    cout << "Make a dollar out of coins!" << endl;
    cout << "Input an amount of pennies: ";
    cin >> pennyCount;
    cout << "Input an amount of Nickles: ";
    cin >> nickleCount;
    cout << "Input an amount of Dimes: ";
    cin >> dimeCount;
    cout << "Input an amount of Quarters: ";
    cin >> quarterCount;

    // calculates the user's total
    const double playersTotal = (PENNY * pennyCount) + (NICKLE * nickleCount) + (dimeCount * DIME) + (quarterCount * QUARTER);
    if (playersTotal == DOLLAR) {
        cout << "Congrats! You know how to count money!" << endl;
    }
    else if(playersTotal > DOLLAR) {
        cout << "Yikes... That doesn't add up you're over a dollar" << endl;
    }
    else {
        cout << "Yikes... That doesn't add up you're less a dollar" << endl;
    }

    cout << setprecision(2);
    cout << "##############################" << endl;
    cout << "" << endl;
    cout << "Pennies " << pennyCount << " (Total: $" << fixed << (pennyCount * PENNY) << " )" << endl;
    cout << "Nickles " << nickleCount << " (Total: $" << fixed << (nickleCount * NICKLE) << " )" << endl;
    cout << "Dimes " << dimeCount << " (Total: $" << fixed << (dimeCount * DIME) << " )" << endl;
    cout << "Quarter " << quarterCount << " (Total: $" << fixed << (quarterCount * QUARTER) << " )" << endl;
    cout << "Your total: " << fixed << playersTotal << endl;
    cout << "" << endl;
    cout << "##############################";

    return 0;
}