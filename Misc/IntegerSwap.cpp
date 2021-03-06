// Swaps three integers from least to greatest.
// Stephen M. Struble
// 10/1/21

#include <iostream>

using std::cout; using std::cin; using std::endl;

void swap(int&, int&);

int main() {
	// inputs the numbers
	cout << "Enter three numbers: ";
	int x, y, z;
	cin >> x >> y >> z;

	// orders x and y
	if (x > y) {
		swap(x, y);
	}

	if (x > z) {
		swap(x, z);
	}

	// orders y and z
	if (y > z) {
		swap(y, z);
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << x << " " << y << " " << z << endl;
}

// interchanges left and right
void swap(int& left, int& right) {
	const int tmp = left;
	left = right;
	right = tmp;
}
