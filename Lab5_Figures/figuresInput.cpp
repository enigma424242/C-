// Prints figures to console prompt
// Stephen M. Struble
// 9/24/21

#include <iostream>
#include "figures.hpp"

using std::cout; using std::cin; using std::endl;

int main() {
	int figure;

	do {
		cout << "Select size: ";
		int size;
		cin >> size;
		cout << "Paint character: ";
		char paint;
		cin >> paint;

		cout << "1. Filled Square" << endl << "2. Hollow Square" << endl << "3. Forward Slash" << endl << "4. Back Slash" << endl << "5. Diamond" << endl << "Select figure: ";
		cin >> figure;

		switch (figure) {
		case 1:
			filledSquare(size, paint);
			break;
		case 2:
			hollowSquare(size, paint);
			break;
		case 3:
			slash(size, paint);
			break;
		case 4:
			backSlash(size, paint);
			break;
		case 5:
			diamond(size, paint);
			break;
		}
	} while (figure > 0 && figure < 6);
}