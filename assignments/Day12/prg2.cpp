/*

Find Sum of Digits of a Number
Input a number and find sum of its digits using a while loop.


*/

#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    
    cout << "Enter a number: ";
    cin >> number;

  
    if (number < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }

   
    while (number > 0) {
        int digit = number % 10; 
        sum += digit;  
        number /= 10;  
    }

    
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
