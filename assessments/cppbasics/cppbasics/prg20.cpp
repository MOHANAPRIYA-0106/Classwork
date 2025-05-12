/*
Write a Program to Calculate the Greatest Common Divisor of Two Numbers

*/

#include<iostream>

using namespace std;

int main() {

	int a, b;

	cin >> a;
	cin >> b;

	while (b != 0) {

		int temp = b;

		b = a % b;

		a = temp;

	}

	cout << "GDC: " << a << endl;

	return 0;


}
