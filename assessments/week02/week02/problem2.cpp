/*
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

Use a loop to calculate the sum of cubes of the digits of the number

Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))

*/

// Using a loop to check if a number is an Armstrong number using while loop

#include <iostream>

using namespace std;

int main()

{
	int num;								// integers variable to store the number num,orgName,remainder
	int orgNum;
	int remainder;
	int result = 0;							// result variable to store the result of the sum of cubes
	
	cout << "Enter an integer: ";			// any number as input or Armstrong number

	cin >> num;								// take any number as input

	orgNum = num;


	// loop to calculate the sum of cubes of the digits

	while (orgNum != 0)						// while loop to check if the number is not equal to 0
	{
		remainder = orgNum % 10;			

		result += remainder * remainder * remainder;		

		orgNum /= 10;
	}

	// compare the sum with the original number


	if (result == num)

		cout << num << " is an Armstrong number." << endl;

	else

	// if not, print that it is not an Armstrong number


		cout << num << " is not an Armstrong number." << endl;

	return 0;
}


