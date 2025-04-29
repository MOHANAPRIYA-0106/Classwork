/*
Sum of Digits Until a Single Digit
Problem:
Take an integer and keep adding its digits recursively until only one digit remains.

Hint:

Use a function that calculates sum of digits.
If result >= 10, call the same function again.


*/

#include <iostream>

int sumDigits(int);

int digitalRoot(int);

using namespace std;


int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int digitalRoot(int num) {

    if (num < 10) 
    {
        return num;
    }


    int sum = sumDigits(num);
     cout<<"Sum of digits: " << sum << endl;

    return digitalRoot(sum);
}
int main() 
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;


    int result = digitalRoot(number);
    cout << "The single digit sum is: " << result  << endl;

    return 0;
}
