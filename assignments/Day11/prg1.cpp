/*
Lost Treasure Map
A pirate found a number carved on a rock. He believes the smallest digit in that number points to the next island he should sail to.
Write a program to find the smallest digit in the given number.




*/



#include <iostream>
using namespace std;

int main() {
    int n, smallest = 9;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        n = n / 10;
    }
    cout << "Smallest digit: " << smallest;
    return 0;
}
