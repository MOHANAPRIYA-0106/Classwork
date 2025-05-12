/*
Write a Program to Check the Prime Number

*/


#include<iostream>

bool isPrime(int);

using namespace std;

bool isPrime(int n) {


	if (n <= 1) {

		return false;

	}

	for (int i = 2;i * i <= n;i++) {
		
		if (n % i == 0) {

			return  false;
		}
}

	return true;

}
int main()
{
	int n;

	cin >> n;

	if (isPrime(n)) {

		cout << " It is a prime" << endl;

	}
	else {

		cout << " It is not a prime" << endl;

	}

	return 0;
}