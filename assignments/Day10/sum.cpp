/*
Check if the Sum of Two Numbers is Even
Problem:
Write a function that returns true if the sum of two integers is even.

Hint:

Sum the two numbers.
Check if (sum % 2 == 0).

*/

#include <iostream>
using namespace std;

bool isSumEven(int num1, int num2)
{
    int sum = num1 + num2; 


    if (sum % 2 == 0) {
        return true;  
    }
    else {
        return false; 
    }
}

int main() {
    int num1, num2;

    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (isSumEven(num1, num2)) {
        cout << "The sum of " << num1 << " and " << num2 << " is even." << endl;
    }
    else {
        cout << "The sum of " << num1 << " and " << num2 << " is odd." << endl;
    }

    return 0;
}
