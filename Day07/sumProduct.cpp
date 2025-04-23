/* 1) write a program to read Sum and Product of digits in a given number

Input Format :
Read a positive integer N

Output Format :
Print the sum and product of digits of the number

Examples :
Input: N = 12
Output :
	sum = 3
	product = 2.

	Input : N = 1012
	Output :
	Sum = 4
	product = 2
*/

#include<iostream>

using namespace std;

int main()
{
	int num = 15;
	int r, prod = 1, sum = 0;

	while (num)
	{
		r = num % 10;
		num = num / 10;
		prod = prod * r;
		sum = sum = r;

	}
	cout << "sum=" << sum << endl;
	cout << "product=" << prod << endl;
	return 0;
}