/*
Write a Program to Find the Greatest of the Three Numbers

*/

#include<iostream>

using namespace std;

int main() {

	int a, b, c;

	

	cin >> a >> b >> c;
	int Max = a;

	if (Max<b) {

		Max = b;
	}
	if (Max<c) {

		Max = c;
	}

	cout << Max << endl;

	return 0;






}