/*
Print Multiplication Table of a Number
Input a number n. Print its multiplication table up to 10.



*/

#include <iostream>
using namespace std;

int main() {
    int n;

  
    cout << "Enter a number: ";
    cin >> n;

 
    if (n < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1; 
    }

    cout << "Multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
     
        if (i >= 1 && i <= 10) {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }

    return 0;
}
