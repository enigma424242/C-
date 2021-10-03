// Add the sum of whole positive integers
//
// September 11, 2021
// Revisions made on September 13,2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	cout << "Input a whole positive integer (0 to quit.):" << endl;

	int total;
	total = 0;

	int num;
	cin >> num;

	int track;
	track = num;

	while (track != 0) {
		cin >> track;
		if (track > 0)
			total += track;
	}

	if (num > 0)
		cout << "The total sum of positive integers is " << total + num << endl;
	else if (num < 0)
		cout << "The total sum of positive integers is " << total << endl;
	else
		cout << "Exiting..." << endl;
}
