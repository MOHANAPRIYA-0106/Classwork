/*
Number Mirror
Hint:

Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.
Example:
For n = 1234, you will print the digits in reverse order:

4 3 2 1





*/



#include <iostream>
using namespace std;

void mirrorNumber(int n) {
    if (n == 0) {
        return; // Base case
    }

    cout << n % 10 << " "; // Print last digit
    mirrorNumber(n / 10);   // Recursive call with number divided by 10
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Mirrored number: ";
    mirrorNumber(number);

    cout << endl;

    return 0;
}