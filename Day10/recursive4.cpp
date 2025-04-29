/*
Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Hint:
Use basic comparisons (>, <) between the three numbers.
Check conditions like:

If a > b and a < c or a < b and a > c, then a is the middle.

*/




#include<iostream>
using namespace std;


int middleNum(int)
{
	int a;
	int b;
	int c;

	std::cout << "Enter three numbers: ";


	std::cin >> a >> b >> c;

	if ((a > b && a < c) || (a < b && a > c)) {
		return a;
	}
	else if ((b > a && b < c) || (b < a && b > c)) {
		return b;
	}
	else {
		return c;
	}
}




