/*

Write a Program to Print the reverse a number
*/

#include<iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	int rev = 0;

	int r = 0;

	while (n != 0) {

		r = n % 10;

		rev = rev * 10 + r;

		n = n / 10;

	}

	cout << rev << endl;
	return 0;

}