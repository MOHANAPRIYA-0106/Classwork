/*

Energy Crystals
An alien crystal's energy level is always a power of 2 (like 2, 4, 8, 16, 32...).
Given an energy reading, find the highest power of 2 less than or equal to the reading.



*/


#include <iostream>
using namespace std;

int main() {
    int n, power = 1;
    cin >> n;
    while (power * 2 <= n) {
        power = power * 2;
    }
    cout << "Highest power of 2: " << power;
    return 0;
}