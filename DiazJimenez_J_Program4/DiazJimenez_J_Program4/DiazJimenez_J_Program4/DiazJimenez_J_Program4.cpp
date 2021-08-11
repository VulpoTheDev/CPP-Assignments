#include <iostream>

using namespace std;

// Function Prototypes
int getMode(int[], int);
void sortArray(int*, int);

int main() {
	// CHANGEME: Changes this to 30 when finish
	const int AMOUNT_OF_PEOPLE = 30;
	int piecesOfPiePeopleAte[AMOUNT_OF_PEOPLE];
	// For Each Person it'll ask them how many pieces of pie they ate in a year
	for (int i = 0; i < AMOUNT_OF_PEOPLE; i++) {
		// Prompts the user how many pieces of pie they ate in a year
		cout << "For person " << (i + 1) << " how many pieces of pie have you ate in a year: ";
		// Sets it on the array
		cin >> piecesOfPiePeopleAte[i];
	}
	// Calls the Mode Function
	int mode = getMode(piecesOfPiePeopleAte, AMOUNT_OF_PEOPLE);
	cout << "The amount of slice of pie most people eaten (mode) is " << mode << endl;
	return 0;
}

// This will return the number that appears most in the array
int getMode(int arrayOfInts[], int size) {
	// Calls the sort Array
	sortArray(arrayOfInts, size);
	int valueWithMostCounts = arrayOfInts[0]; // Sets the value with the most occurrences to the first element
	int highestCounter = 1; // Sets the highest counter to one (since the first element in the array appears once)
	// Goes through each element in the array
	for (int i = 0; i < size; i++) {
		// Sets the temp counter to 0 which will be used to count how many times the element appears in the array
		int tempCounter = 0;
		// Goes through each element in the array to compare with
		for (int j = 0; j < size; j++) {
			// If the element on index i appears on the array on index j then update the counter
			if (arrayOfInts[i] == arrayOfInts[j]) {
				tempCounter++;
			}
		}
		// Once finish comparing, see if the tempCounter is bigger than the highestCounter
		if (tempCounter > highestCounter) {
			// If So, Update the highestCount and the valueWithTheMostCounts
			valueWithMostCounts = arrayOfInts[i];
			highestCounter = tempCounter;
		}
	}
	return valueWithMostCounts;
}


void sortArray(int *arrayOfInts, int size) {
	// Goes through each element in the array
	for (int i = 0; i < size; i++) {
		// Makes the placeholder (so we can use to swap the elements), smallestNumber and it's position
		int placeholder = arrayOfInts[i], 
			smallestNumber = arrayOfInts[i],
			smallestNumberPosition = 0;
		// Loops through each element in tge array
		for (int j = i; j < size; j++) {
			// if that element on index j is smaller than the smallestNumber... update it
			if (arrayOfInts[j] < smallestNumber) {
				smallestNumber = arrayOfInts[j];
				smallestNumberPosition = j;
			}
		}
		// If the position is not zero (meaning no changes were made and so it doesn't overwrite the 0's index), update it
		if (smallestNumberPosition != 0) {
			arrayOfInts[smallestNumberPosition] = placeholder;
			arrayOfInts[i] = smallestNumber;
		}
	}
	return;
}