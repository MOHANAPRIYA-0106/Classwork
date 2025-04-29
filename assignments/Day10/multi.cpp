/*
Find Power Using Only Multiplication
Problem:
Write a function to compute a^b using only multiplication, no pow() or loops.

Hint:
Use recursion:

a^b = a * a^(b-1)
Base case: b == 0 → return 1.

*/


#include <iostream>


int power(int, int);

using namespace std;


int power(int a, int b) {
   
    if (b == 0) {
        return 1;
    }
   
    return a * power(a, b - 1);
}

int main() {

    int base, exponent;

    cout << "Enter the base number: ";

    cin >> base;

    cout << "Enter the exponent: ";

    cin >> exponent;

    int result = power(base, exponent);

    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
