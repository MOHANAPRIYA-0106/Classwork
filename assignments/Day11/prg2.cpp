/*
Odd Coin Counting
In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.
Given your total coin-collection number, find the sum of only the odd digits of your coin number to determine your prize.


*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1) {
            sum += digit;
        }
        n = n / 10;
    }
    cout << "Sum of odd digits: " << sum;
    return 0;
}