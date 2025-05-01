/*
Print All Odd Numbers from 1 to N
Given N, print all odd numbers up to N using a loop.


*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

  
    for (int i = 1; i <= N; i++) 
    {
                                             // Check if the number is odd
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}

