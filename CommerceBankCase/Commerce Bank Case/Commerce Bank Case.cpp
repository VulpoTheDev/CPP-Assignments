#include <iostream>

using namespace std;

// Prototypes
bool testPin(const int[], const int[], int);

int main()
{
	// Typedef for the pin numbers that depends on the constant digit
	const int DIGITS = 4;
	typedef const int pinNumber[DIGITS];


	// These pins will be used for testing
	pinNumber dummyPinOne = { 2, 9, 5, 6 };
	pinNumber dummyPinTwo = { 5, 6, 3, 2 };
	pinNumber dummyPinThree = { 2, 9, 5, 6 };
	// Larger pins to test if they would still work if the Size was were to be changed in the future
	const int dummyPinFour[6] = { 2, 9, 5, 6, 4, 6 };
	const int dummyPinFive[6] = { 2, 9, 5, 6, 4, 6 };

	// Runs the function and if it returns true say that it matches otherwise say it doesn't in a jokingly manner
	if (testPin(dummyPinOne, dummyPinTwo, DIGITS)) {
		cout << "Pin Matches" << endl;
	}
	else {
		cout << "Pin Doesn't matchs. *Someone in a distance* SECURITY!!!" << endl;
	}
}

// This will check if the pin matches the actual pin. This takes in 3 parameter.
// The Client Pin which is passed after it's been enter, actual pin from the database
// Pin size which should be 4 but if changes are planned to be made you can update it's size
bool testPin(const int clientPin[], const int actualPin[], int pinSize) {
	// Loops (how many times the pin size is)
	for (int i = 0; i < pinSize; i++) {
		// Checks the index of both the client and actual pin and if they are found to not match
		// The whole function becomes false otherwise it'll continue until it's fully checked.
		if (clientPin[i] != actualPin[i]) {
			return false;
		}
	}
	// All Done? Didn't return false after that loop? Cool! Return true saying that the pin matches
	return true;
}

