/*

Magic Multiplying Puzzle
You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic.


*/



#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            product *= digit;
        }
        n = n / 10;
    }
    if (isPrime(product)) {
        cout << "Box opens!";
    }
    else {
        cout << "Box remains closed.";
    }
    return 0;
}
