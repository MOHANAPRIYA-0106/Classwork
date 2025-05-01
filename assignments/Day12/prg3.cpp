/*
Reverse a Number
Input a number and print its reverse using loops.
Example: 123 → 321





*/

#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;

  
    cout << "Enter a number: ";
    cin >> number;

  
    if (number < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }

   
    while (number > 0) {
        int digit = number % 10;  
        reverse = reverse * 10 + digit;  
        number /= 10;  // Remove the last digit
    }

   
    cout << "Reversed number: " << reverse << endl;

    return 0;
}
