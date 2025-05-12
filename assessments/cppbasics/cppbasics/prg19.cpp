/*

Write a Program to Find the Nth Term of the Fibonacci Series
*/
#include<iostream>

using namespace std;

int main() {

	int n;
	int a = 0, b = 1;

	int count = 0;
	cin >> n;
	while (count < n)
	{
		cout << a << " " << endl;

		int c = a + b;
		a = b;
		b = c;

		count++;
	}

	return 0;

}
