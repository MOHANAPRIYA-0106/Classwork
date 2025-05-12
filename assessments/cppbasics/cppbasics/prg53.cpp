/*
Write a program in C++ to find the area and circumference of a circle.

*/

#include<iostream>

using namespace std;

int main()

{
	float radious;

	float pi = 3.14;


	cin >> radious;

	double cirArea = pi * radious * radious;

	double cirCircum = 2 * pi * radious;
	 
	cout << cirArea << endl;

	cout << cirCircum << endl;

	return 0;



}


