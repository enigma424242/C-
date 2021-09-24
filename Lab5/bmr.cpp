// Calculates the Basal Metabolic Rate and how many cookies can a male or female eat per day
// Stephen M. Struble
// 9/24/21

#include <iostream>

using std::cout; using std::cin; using std::endl;

double bmrWomen(int weight, int height, int age);
double bmrMen(int weight, int height, int age);

int main() {
	cout << "Gender: ";
	char gender;
	cin >> gender;
	int weight, Ft, In, age;
	cout << "Weight in pounds: ";
	cin >> weight;
	cout << "height (ft in): ";
	cin >> Ft >> In;
	cout << "age: ";
	cin >> age;
	int height = Ft * 12 + In;

	double bmr;
	if (gender == 'F') {
		bmr = bmrWomen(height, weight, age);
	}
	else if (gender == 'M') {
		bmr = bmrMen(height, weight, age);
	}

	const int caloriesInCookie = 150;
	int cookies = bmr / caloriesInCookie;

	cout << "You can eat " << cookies << " cookies a day.";
}

double bmrWomen(int weight, int height, int age) {
	return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
}
double bmrMen(int weight, int height, int age) {
	return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
}
