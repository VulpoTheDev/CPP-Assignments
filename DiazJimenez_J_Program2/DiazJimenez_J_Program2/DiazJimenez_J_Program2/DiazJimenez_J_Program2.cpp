#include <iostream>

using namespace std;

int main() {
	// CONSTANT VARIABLES
	const double CARBON_DIOXIDE = 258.0, AIR= 331.5, HELIUM = 972.0, HYDROGEN = 1270.0;
	
	// Initalize Variables
	int selection, seconds;

	// Prompts the user to make a selection of gases
	cout << "(1) Carbon Dioxide\n(2) Air\n(3) Helium\n(4) Hydrogen" << endl;
	cout << "Please make a number selection that corresponds with the gas you wanting to know info about: ";
	cin >> selection;
	
	// Validation
	while (selection < 0 || selection > 4)
	{
		cout << "INCORRECT VALUE! - Please make a number selection that corresponds with the gas you wanting to know info about: ";
		cin >> selection;
	}

	// Prompts the user to input the seconds their sounds traveled
	cout << "Please input the seconds you're wondering the about the sounds to travel that's between 0-30 seconds: ";
	cin >> seconds;
	
	// Validation
	while (seconds < 0 || seconds > 30) 
	{
		cout << "INCORRECT VALUE! - Please input the seconds you're wondering the about the sounds to travel that's between 0-30 seconds: ";
		cin >> seconds;
	}

	// Selection
	switch (selection) {
	case 1:
		// Carbon Dioxide
		cout << "The sound for Carbon Dioxide will go " << (CARBON_DIOXIDE * seconds) << " for " << seconds + " seconds";
		break;
	case 2: 
		// Air
		cout << "The sound for Air will go " << (AIR * seconds) << " for " + seconds << " seconds";
		break;
	case 3:
		// Helium
		cout << "The sound for Helium will go " << (HELIUM * seconds) << " for " << seconds << " seconds";
		break;
	case 4:
		// Hydrogen
		cout << "The sound for Hydrogen will go " << (HYDROGEN * seconds) << " for " << seconds << " seconds";
		break;
	}


	return 0;
}