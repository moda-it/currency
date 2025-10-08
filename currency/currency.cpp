#include <iostream>

using namespace std;

	int main() {
		double usd = 41.48;
		double eur = 48.24;
		double amount;
		int choice;

		cout << "1. USD to UAH" << endl;
		cout << "2. EUR to UAH" << endl;
		cout << "3. UAH to USD" << endl;
		cout << "4. UAH to EUR" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		cout << "Enter amount: ";
		cin >> amount;

		if (choice == 1) {
			cout << amount << " USD = " << amount * usd << " UAH" << endl;
		} else if (choice == 2) {
			cout << amount << " EUR = " << amount * eur << " UAH" << endl;
		} else if (choice == 3) {
			cout << amount << " UAH = " << amount / usd << " USD" << endl;
		} else if (choice == 4) {
			cout << amount << " UAH = " << amount / eur << " EUR" << endl;
		} else {
			cout << "Invalid choice" << endl;
		}

		return 0;
	};