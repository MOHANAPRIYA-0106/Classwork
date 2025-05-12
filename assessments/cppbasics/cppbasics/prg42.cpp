/*

Write a Program to Swap the Values of Two Variables Without Using any Extra Variable

*/

#include<iostream>

using namespace std;

int main() {
	int a;
	int b;

	cin >> a;
	cin >> b;

	a = a ^ b;
	b = a ^ b;

	a = a ^ b;

	cout << a << endl;
	cout << b << endl;


}
