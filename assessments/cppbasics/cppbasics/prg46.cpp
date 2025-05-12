/*
Write a Program for Octal to Decimal Conversion

*/

#include<iostream>

using namespace std;

int main() {

	int n;
	int r;
	int place=0;
	int product = 0;
	

	cin >> n;

	while (n!=0) {

		r = n % 10;

		product += r * pow(8, place);

		place++;

		n /= 10;

	}

	cout << product << endl;
	return 0;




}