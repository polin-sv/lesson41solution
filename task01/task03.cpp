#include <iostream>
#define STUDENTS_NUMBER 3.0

using namespace std;


double calculate_marks(double a, double b, double c) {

	return (a + b + c) / STUDENTS_NUMBER;
}

int main() {

	const int MARK_COUNT = 3;
	int marks[MARK_COUNT];

	cout << "input three marks: ";
	for (int index = 0; index < MARK_COUNT; index++) {
		cin >> marks[index];
	}

	double avg = 0;

	for (int index = 0; index < MARK_COUNT; index++) {

		avg += marks[index];
	}

	cout << "avg result is  " << avg / MARK_COUNT << endl;

	return 0;
}