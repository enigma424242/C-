#include <iostream>
#include "figures.hpp"

using std::cout; using std::cin; using std::endl;

void filledSquare(int size, char paint) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << paint;
		}
		cout << endl;
	}
}

void hollowSquare(int size, char paint) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
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
}

void slash(int size, char paint) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
}

void backSlash(int size, char paint) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
}

void diamond(int size, char paint) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		for (int j = 0; j < size; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (i == j)
				cout << paint;
			else
				cout << " ";
		}
		for (int j = 0; j < size; j++) {
			if (i + j == size - 1)
				cout << paint;
			else
				cout << " ";
		}
		cout << endl;
	}
}