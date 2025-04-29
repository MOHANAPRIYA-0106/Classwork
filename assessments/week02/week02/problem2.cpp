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



#include <iostream>



using namespace std;

bool isArmstrong(int num) 

{
    int sum = 0;

    int temp = num;

    int n = 0;

   
    while (temp > 0)
    
    {
        temp /= 10;
        n++;
    }

    temp = num;

   
    while (temp > 0) 
    {
        int digit = temp % 10;

        sum += pow(digit, n);

        temp /= 10;
    }

    
    return sum == num;
}

int main()

{
    int num;

    
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
    
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

