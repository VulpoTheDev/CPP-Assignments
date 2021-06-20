#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string monthNameOne, monthNameTwo, monthNameThree;
    double monthOneRainfall, monthTwoRainfall, monthThreeRainfall;
    cout << "Enter your first month: ";
    cin >> monthNameOne;
    cout << "Enter the rainfall for first month: ";
    cin >> monthOneRainfall;
    cout << "Enter your second month: ";
    cin >> monthNameTwo;
    cout << "Enter the rainfall for second month: ";
    cin >> monthTwoRainfall;
    cout << "Enter your third month: ";
    cin >> monthNameThree;
    cout << "Enter the rainfall for third month: ";
    cin >> monthThreeRainfall;
    cout << setprecision(2);
    cout << "The average monthly rainfall for " << monthNameOne << ", " << monthNameTwo << ", and " << monthNameThree << " was " << fixed << ((monthOneRainfall + monthTwoRainfall + monthThreeRainfall) / 3);

    return 0;
}