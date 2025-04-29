/*
 Problem Statement :Write the program for number and star pattern printing given n value.
Input Format : Take N as input of type integer.
Output Format : Print number and star pattern printing

Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:
*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
 ------------------------------------------------------
*/

#include <iostream>

void printPattern(int N);

using namespace std;

void printPattern(int N) 
{
    int itr1;
    int itr2;
   
    for (int itr1 = 1; itr1 <= N; itr1++)
    {
       
        cout << "*";

      
        for (int itr2 = 1; itr2 <= itr1; itr2++) {
            cout << itr2;
        }

       
        for (int itr2 = itr1 - 1; itr2 >= 1; itr2--) {
            cout << itr2;
        }

       
        cout << "*" << endl;
    }

    for (int itr1 = N - 1; itr1 >= 1; itr1--)
    {
       
        cout << "*";

   
        for (int itr2 = 1; itr2 <= itr1; itr2++) {
            cout << itr2;
        }

       
        for (int itr2 = itr1 - 1; itr2 >= 1; itr2--) {
            cout << itr2;
        }

       
        cout << "*" << endl;
    }
}

int main() {
    int N;

 
    cout << "Enter a number (4 <= N <= 10): ";
    cin >> N;

    
    if (N >= 4 && N <= 10) {
        printPattern(N);
    }
    else {
        cout << "Please enter a number between 4 and 10." << endl;
    }

    return 0;
}
