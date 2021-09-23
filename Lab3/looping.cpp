// Prints various shapes to console
// Stephen M. Struble
// September 11, 2021

#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

	int size;
	cout << "Input figure size:" << endl;
	cin >> size;

	char paint;
	cout << "Input paint character:" << endl;
	cin >> paint;

	int i;
	int j;

	// Prints a solid square
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << paint;
		}
		cout << endl;
	}

	// Prints a diaganol line (\)
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}

	// Prints a diaganol line (/)
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}

	// Prints a hollow square
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i == 0)
				cout << paint;
			else if (j == 0)
				cout << paint;
			else if (j == size - 1)
				cout << paint;
			else if (i == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}

	// Prints an X
	for (i = 0; i < size ; i++) {
		for (j = 0; j < size ; j++) {
			if (i + j == size - 1)
				cout << paint;
			else if (i == j)
					cout << paint;
			else
					cout << " ";
		}
	}

	// Prints a diamond
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		for (j = 0; j < size; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - 1; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		for (j = 0; j < size; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
}
