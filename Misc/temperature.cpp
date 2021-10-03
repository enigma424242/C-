// Converts degrees Fahrenheit to degrees Celsius
// 
// 9/29/2021

#include <iostream>

using std::cout; using std::cin; using std::endl;

double tempConvert(double fehrenheit);

int main() {

	double degF;
	double degC;

	cout << "This program will convert a temperature from Fahrenheit to Celsius.\n";
	cout << "Enter a temperature in Fahrenheit.\n";
	cin >> degF;
	degC = tempConvert(degF);
	cout << "The temperature in Celsius is " << degC << endl;

}

double tempConvert(double fahrenheit) {
	return (fahrenheit - 32) * 5.0 / 9.0;
}
