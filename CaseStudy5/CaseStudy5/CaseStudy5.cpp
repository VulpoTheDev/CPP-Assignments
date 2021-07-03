#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Variables
	double loan, rate, monthlyInterestRate, years, balance, term, payment, monthlyInterest, principal;
	int numPayments, month;

	// Prompts the user for loans, interet rate and years
	cout << "Please input your loan $";
	cin >> loan;
	cout << "Please input your annual interest rate (with decimals): ";
	cin >> rate;
	cout << "Years of Loan: ";
	cin >> years;

	// Calculates Monthly payments
	numPayments = 12 * years;
	monthlyInterestRate = rate / 12.0;
	term = pow((1 + monthlyInterestRate), numPayments);
	payment = (loan * monthlyInterestRate * term) / (term - 1.0);
	balance = loan;

	// Sets the precision to two for money format and Prints top part
	cout << setprecision(2);
	cout << "Monthly Payments: $" << fixed << payment << endl;
	cout << setw(10) << "Month" << setw(10) << " Interest" << setw(10) << "Principal" << setw(10) << " Balance " << endl;
	cout << "------------------------------------------------" << endl;

	// For Each month, it'll calculate the interests/payment and add it to the monthly payments
	for (int month = 1; month <= numPayments; month++) {
		monthlyInterest = monthlyInterestRate * balance;
		if (month != numPayments) {
			principal = payment - monthlyInterest;
		}
		else {
			principal = 0;
			payment = balance + monthlyInterest;
		}
		balance -= principal;

		cout << setw(8) << month << setw(10) << monthlyInterest<< setw(10) << principal << setw(10) << balance << endl;

	}

}