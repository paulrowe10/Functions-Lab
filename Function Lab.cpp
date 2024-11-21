//Paul Rowe
//11/21/24
//Mrs. Alblas
//Function Lab

#include <iostream>
using namespace std;

void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
int calculateAverage(int a, int b, int c);

int main()
{
	countdown();

	string name;
	int times;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter the amount of times: ";
	cin >> times;
	customGreet(name, times);

	int favorite = getFavoriteNumber();
	cout << "Your favorite number is: " << favorite << endl;

	int a;
	int b;
	int c;
	cout << "Enter a integer: ";
	cin >> a;
	cout << "Enter a integer: ";
	cin >> b;
	cout << "Enter a integer: ";
	cin >> c;
	cout << "The average is: " << calculateAverage(a, b, c);
}

void countdown() {
	for (int i = 10; i >= 1; i--) {
		cout << i << endl;
	}
	cout << "Lift off!" << endl;
}

void customGreet(string name, int times) {
	for (int i = 0; i < times; i++) {
		cout << "Hello, " << name << "!" << endl;
	}
}

int getFavoriteNumber() {
	return 7;
}

int calculateAverage(int a, int b, int c) {
	int average = (a + b + c) / 3;
	return average;
}
