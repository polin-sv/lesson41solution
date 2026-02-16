#include <iostream>
#define DEFAULT_SIZE 20

using namespace std;


double calculate_marks(double a, double b, double c) {

	return (a + b + c) / STUDENTS_NUMBER;
}

int main() {

	int marks[DEFAULT_SIZE];

	int length;

	do {
		cout << "input the number of marks(1-20): ";
		cin >> length;
	} while (length <= 0 && length > DEFAULT_SIZE);

	cout << "input three marks: ";
	for (int index = 0; index <length; index++) {
		cin >> marks[index];
	}

	double avg = 0;

	for (int index = 0; index < length; index++) {

		avg += marks[index];
	}

	cout << "avg result is  " << avg / length << endl;

	return 0;
}