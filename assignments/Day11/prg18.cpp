/*
Find the Maximum of Three Numbers
Take three integers and print the largest using nested if-else.

*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) {
            cout << "Maximum: " << a;
        }
        else {
            cout << "Maximum: " << c;
        }
    }
    else {
        if (b >= c) {
            cout << "Maximum: " << b;
        }
        else {
            cout << "Maximum: " << c;
        }
    }
    return 0;
}
