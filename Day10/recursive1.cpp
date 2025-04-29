/*

Problem 2: Sum of First N Natural Numbers
Problem Statement:
Write a recursive function to find the sum of the first N natural numbers.
*/

#include<iostream>

using namespace std;

int sumOfNaturalNumbers(int n);

int sumOfNaturalNumbers(int n)
{
	if (n == 0) {
		return 0;
	}
	else {
		return n + sumOfNaturalNumbers(n - 1);
	}

}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int result = sumOfNaturalNumbers(n);
	cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
	return 0;
}
 



