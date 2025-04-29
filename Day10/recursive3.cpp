
/*
Count Number of Zeros in a Number
Problem Statement:
Write a recursive function to count the number of zeros in an integer.
i/p: 102040
o/p: Number of zeros in 102040 is 3

*/


#include<iostream>

using namespace std;

int count_digit(int num)
{
    int count = 0;
    if (num == 0) {
        return 1;
    }
    if (num < 10) {
		return 0;
	}
    if (num % 10 == 0) {
        return 1 + count_digit(num / 10);
    }
    else {
        return count_digit(num / 10);
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;


    if (number == 0) {
        cout << "The number contains 1 zero." << endl;
    }
    else {
        cout << "The number contains " << count_digit(number) << " zero(s)." << endl;
    }
}