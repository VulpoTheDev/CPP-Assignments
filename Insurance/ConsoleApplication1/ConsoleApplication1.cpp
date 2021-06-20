#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double insuranceCoverage = 0.8;
    double costOfProperty;

    cout << "Please input the cost of the property: ";
    cin >> costOfProperty;
    cout << "The cost of the property the insurance will take care of is: " << costOfProperty * insuranceCoverage;

    return 0;
}