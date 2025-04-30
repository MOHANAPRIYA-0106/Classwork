/*

King's Perfect Army
A king decided only perfect armies can enter the final battle.
An army's number is perfect if the sum of its divisors equals the number itself.
Check whether a given army number is perfect.



*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int i = 1;
    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    if (sum == n) {
        cout << "Perfect number";
    }
    else {
        cout << "Not a perfect number";
    }
    return 0;
}