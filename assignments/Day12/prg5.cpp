/*

Count Number of Even and Odd Digits in a Number
Input a number, count how many digits are even and how many are odd.


*/


#include <iostream>
using namespace std;

int main() {
    int number, evenCount = 0, oddCount = 0;

    
    cout << "Enter a number: ";
    cin >> number;

  
    if (number < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }

    while (number > 0) {
        int digit = number % 10;  

       
        if (digit % 2 == 0) {
            evenCount++;  
        }
        else {
            oddCount++;   
        }

        number /= 10;  
    }

   
    cout << "Even digits count: " << evenCount << endl;
    cout << "Odd digits count: " << oddCount << endl;

    return 0;
}
