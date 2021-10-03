// Calculator
// 
// September 17, 2021


#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main() {
	cout << "1. absolute value" << endl << "2. square root" << endl << "3. floor" << endl << "4. power" << endl;
	int operation;
	do {
		cout << "Select an operation : ";
		cin >> operation;
		double Input1, Input2, Input3, Input4, InputExp;
		switch (operation) {
		case 1:
			cout << "Enter a number : ";
			cin >> Input1;
			cout << "The result is " << abs(Input1) << endl;
			break;
		case 2:
			cout << "Enter a number: ";
			cin >> Input2;
			cout << "The result is " << sqrt(Input2) << endl;
			break;
		case 3:
			cout << "Enter a number: ";
			cin >> Input3;
			cout << "The result is " << floor(Input3) << endl;
			break;
		case 4:
			cout << "Enter a number: ";
			cin >> Input4;
			cout << "Enter a power: ";
			cin >> InputExp;
			cout << "The result is " << pow(Input4, InputExp) << endl;
			break;
		}
	} while (operation > 0 && operation < 5);
}
