/*
Spaceship Countdown
First Non-Zero Digit in Secret Code
A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.
*/

#include <iostream>
using namespace std;

int main() {
    int n, last_non_zero = -1;
    cin >> n;
    while (n > 0) {
        last_non_zero = n % 10;
        n = n / 10;
    }
    if (last_non_zero % 2 == 0) {
        cout << "First non-zero digit is even";
    }
    else {
        cout << "First non-zero digit is odd";
    }
    return 0;
}