// Guess the Age of the Troll
// 
// September 17, 2021

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	cout << "A fair young maiden is locked up in an enchanted castle guarded by an ugly old troll." << endl;
	cout << "Once a year, a handsome prince is allowed to come to the castle to try to free the maiden." << endl;
	cout << "To free her, the prince has to guess the troll's age." << endl;
	cout << "If the prince guesses correctly, the maiden is freed, they get married and live happily ever after." << endl;
	cout << "If the prince guesses incorrectly, the troll says if he is younger or older and the prince has to come next year." << endl;

	srand(time(nullptr));

	int lowestAge;
	lowestAge = 100;
	int highestAge;
	highestAge = 200;
	int trollAge;
	trollAge = (highestAge - lowestAge + 1) + (rand() % (lowestAge + 1));
	int guessAge;

	do {
		cout << "Hello, handsome prince. I am an ugly old troll. How old am I?" << endl;
		cin >> guessAge;
		if (guessAge == trollAge) {
			cout << "You got it! Here is the fair maiden. Live happily ever after!" << endl;
		}
		else if (guessAge < trollAge) {
			cout << "Wrong, I am older. No fair maiden for you. Better luck next year." << endl;
			trollAge++;
			guessAge = 0;
		}
		else {
			cout << "Wrong, I am younger. No fair maiden for you. Better luck next year." << endl;
			trollAge++;
			guessAge = 0;
		}
	} while (guessAge != trollAge);

}
