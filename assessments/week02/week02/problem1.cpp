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

// create a program to print a number and star pattern

#include <iostream>

using namespace std;

// create a program to print a number and star pattern

#include <iostream>

using namespace std;

int main() {


	int a;									//integer variable to store the number of rows a,b
	int b;
	int num;								//integer variable to store the number of rows num

	cout << "Enter the number of rows: ";

	cin >> num;								//give any number


	// Upper part 

	for (int a = 1; a <= num; a++)			// Using forloop to print the upper part 

	{
		cout << "*";						// we can use cout to print the star

		for (int b = 1; b < a; b++)        // give b value is 
		{
			cout << b;							

		}

		for (int b = a; b >= 1; b--) 
		{
			cout << b;


		}
		cout << "*" << endl;
	}

	// Lower part 


	for (int a = num - 1; a >= 1; a--)		// Using forloop to print the lower part

	{

		cout << "*";

		for (int b = 1; b < a; b++)			
		{		
			cout << b;
		}

		for (int b = a; b >= 1; b--)
		{
			cout << b;
		}

		cout << "*" << endl;				// we can use cout to print the star

	}

	return 0;
}