
/*
Find the Second Last Digit of a Number
Problem:
Given a positive integer, find its second last digit.

Hint:

First, divide number by 10 (n/10) to remove the last digit.
Then get last digit of the result using modulo (% 10).

*/

#include <iostream>

int secLastDigit(int n);

using namespace std;


int secLastDigit(int n)

{
	n = n / 10;

	cout << "n after removing last digit: " << n << endl;


	return n % 10;
}

int main() {

	int num;

	cout << "Enter a positive integer: ";

	cin >> num;

	int secondLast = secLastDigit(num);

	if (num < 0) {

		cout << "Please enter a positive integer." << endl;
		return 0;
	}

	if (num < 10)
	{
		cout << "The number has no second last digit." << endl;
		return 0;
	}
	cout << "The second last digit is: " << secondLast << endl;

	return 0;
}
