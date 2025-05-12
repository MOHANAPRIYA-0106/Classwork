
/*	Write a C++ Program to Check Whether a Number is a Positive or Negative Number

*/

#include<iostream>

using namespace std;

int main()

{
	int n;
	cin >> n;

	if (n > 0) {

		cout<< "It is a positive number" << endl;
	}
	else if(n == 0) {

		cout << "It is positive nor negative" << endl;
	}
	else {
		cout <<"It is a negative number" << endl;

	}
	return 0;

	}

/*
o/p:

10
It is a positive number

-4
It is a negative number



*/






