/*
The Doubling Machine
A strange machine doubles a number every time you press a button.
Starting from 1, you press the button n times.
Find the sum of all numbers you see after each press.


*/

#include <iostream>
using namespace std;

int main() {
    int n, value = 1, sum = 0, count = 0;
    cin >> n;
    while (count < n) {
        value = value * 2;
        sum += value;
        count++;
    }
    cout << "Sum after all presses: " << sum;
    return 0;
}