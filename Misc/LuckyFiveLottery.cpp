// Lucky 5 Lottery
// Stephen M. Struble
// 10/1/2021

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

void assign(int wins[], int size);
void printOut(int wins[], int size);
void draw(int wins[], int size);
bool check(int wins[], int size, int num);
int entry();

int main(){
	srand(time(nullptr));
	const int size = 10;
	int wins[size];

	assign(wins, size);
	draw(wins, size);
	for (int i = 0; i < 5; i++) {
		int userInput = entry();
		bool results = check(wins, size, userInput);
		if (results == true) {
			cout << "You won. Congratulations!" << endl;
			return 0;
		}
	}
	printOut(wins, size);
}

void assign(int wins[], int size) {
	for (int i = 0; i < size; i++) {
		wins[i] = 0;
	}
}

void printOut(int wins[], int size) {
	for (int i = 0; i < size; i++) {
		cout << wins[i] << " ";
	}
	cout << endl;
}

bool check(int wins[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (num == wins[i])
			return true;
	}
	return false;
}

void draw(int wins[], int size) {

	int lotNums = 0;
	while (lotNums < size) {
		int newNum = rand() % 100 + 1;
		bool status = check(wins, size, newNum);
		if (status == false) {
			wins[lotNums] = newNum;
			lotNums++;
		}
	}
}

int entry() {
	int userNum;
	cout << "Enter a number from 1 - 100." << endl << ": ";
	cin >> userNum;
	return userNum;
}
