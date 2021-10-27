// Simulates rolling a die of the users choice
// Stephen M. Struble
// 9/29/2021

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(0));
	const int one = 1;
	int die;

	while (one == 1) {

		cout << "What kind of die would you like to roll? (4, 6, 8, 12, 20, 0 to quit.)" << endl << ": ";
		cin >> die;

		if (die != 0) {
			switch (die) {
			case 4:
				cout << (rand() % 4) + 1 << endl;
				break;
			case 6:
				cout << (rand() % 6) + 1 << endl;
				break;
			case 8:
				cout << (rand() % 8) + 1 << endl;
				break;
			case 12:
				cout << (rand() % 12) + 1 << endl;
				break;
			case 20:
				cout << (rand() % 20) + 1 << endl;
				break;
			default:
				cout << "Input not recognized." << endl;
			}
		}
		else {
			cout << "Exiting..." << endl;
			return 0;
		}
	}
}
