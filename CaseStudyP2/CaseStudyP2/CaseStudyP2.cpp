#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

/// 
///  This program will ask you questions about the amount of trees 
///  you bought and their height. This will give you the bill that
///  shows what you bought
/// 
int main() {
	// Cost of the trees by feet and cost of Services
	const double treeCostUnderThreeFeet = 39.00,
		treeCostBetweenThreeFive = 69.00,
		treeCostBetweenSixToEight = 99.00,
		treeCostOverEight = 199.00,
		onlyDeliveryCostPerTree = 20.00,
		maxDeliveryCost = 100.00;

	// Variables that are initalized that will be used later
	int treesPurchased;
	double height, total, subTotal, plantingCost = 0.00, deliveryCost = 0.00, treeCost;
	char planted = 'n', delivered = 'n';

	// Prompts the user about the amount of trees they bought
	cout << "How many tree's did you bought from Green Field: ";
	cin >> treesPurchased;
	cout << "To the nearest foot, how high were those trees: ";
	cin >> height;
	cout << "Are those trees to be planted (Y/N): ";
	cin >> planted;

	// Prompts the user if they would like it delivered if having it planted is false
	if (!(tolower(planted) == 'y')) {
		cout << "Would you like to delivered? (Y/N): ";
		cin >> delivered;
	}

	// Calculates the subtotal by the # of trees and height
	if (height < 3) {
		treeCost = treeCostUnderThreeFeet;
	}
	else if (height <= 5) {
		treeCost = treeCostBetweenThreeFive;
	}
	else if (height >= 8) {
		treeCost = treeCostBetweenSixToEight;
	}
	else {
		treeCost = treeCostOverEight;
	}

	// Sets the subTotal to the # of trees purchased and the cost
	subTotal = (treeCost * treesPurchased);

	// Prompts if the user would like the tree planted if not delivered
	if (tolower(planted) == 'y') {
		plantingCost = subTotal / 2;
	}else if (tolower(delivered) == 'y') {
		deliveryCost = treesPurchased * onlyDeliveryCostPerTree;
	}
	else {
		deliveryCost = maxDeliveryCost;
	}

	// Sets the total to the subtotal with the delivery/planting cost
	total = subTotal + deliveryCost + plantingCost;

	// Prints the Bill
	cout << setprecision(2);
	cout << "##########################################" << endl;
	cout << "      " << endl;
	cout << "Evergreen Tree Bill" << endl;
	cout << "      " << endl;
	cout << "      Trees bought: " << fixed << treesPurchased << " (Height: " << height << ")" << endl;
	cout << "      Cost per tree: $" << fixed << treeCost << endl;
	cout << "      Delivery Cost: $" << fixed << deliveryCost << endl;
	cout << "      Planting Cost: $" << fixed << plantingCost << endl;
	cout << "      Sub Total: $" << fixed << subTotal << endl;
	cout << "      Total: $" << fixed << total << endl;
	cout << "      " << endl;
	cout << "##########################################" << endl;

	return 0;
}

