#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user their weight and height and the program will
// Determine their BMI and if they are optimal, overweight or under
int main() {
	// Constant Variarbles of BMI to Later determine 
	// if the user is optimal, underwieght or over
	const double lowerOptimalBMI = 18.5, higherOptimalBMI = 25;
	double weight, height, bmi;
	// Prompts the user their weight and height
	cout << "How much do you weight in pounds: ";
	cin >> weight;
	cout << "What is your height in inches: ";
	cin >> height;
	// calculates the BMI
	bmi = ((703 * weight)) / pow(height, 2);

	// Prints their BMI and if they're healthy, underweight or over
	if (bmi >= lowerOptimalBMI && bmi <= higherOptimalBMI) {
		// Optimal
		cout << "Your BMI is " << bmi << " you are healthy!";
	}else if (bmi < lowerOptimalBMI) {
		// Under
		cout << "Your BMI is " << bmi << " you are underweight.";
	}
	else {
		// Over
		cout << "Your BMI is " << bmi << " you are overweight.";
	}

	
	return 0;
}