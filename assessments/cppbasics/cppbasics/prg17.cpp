/*
Write a Program to Check Palindrome

*/

#include<iostream>

using namespace std;

int main() {

	int n;
	
	int rev = 0;

	int temp;

	cin >> n;

	temp = n;

	while (n > 0) {

		rev = rev * 10 + (n % 10);

		n = n / 10;
	}

	if (rev == temp) {
		  
		cout << "Palindrome" << endl;

	}
	else {

		cout << "It is not a Palindrome" << endl;
	}

	return 0;
}