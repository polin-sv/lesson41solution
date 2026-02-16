#include <iostream>
using namespace std;

double calculate_marks(double a, double b, double c) {

	return (a + b + c) / 3.0;
}

int main() {

	double mark1, mark2, mark3;

	cout << "input three marks: ";
	cin >> mark1 >> mark2 >> mark3;

	double result= calculate_marks(mark1, mark2, mark3);

	cout << "result: " << result;

	return 0;
}