/*   Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal
if true	print YES
otherwise  print NO.

*/


#include<iostream>

using namespace std;

int main()
{
	int num1;
	int num2;
	int sum1 = 0;
	int sum2 = 0;
	int r;
	int arr1[5]= { 0 };
	int arr2[10] = { 0 };

	cout << "Enter the first number:";
	cin >> num1;

	cout << "Enter the Second number:";
	cin >> num2;

	while (num1)
	{
		r = num1 % 10;
		num1 = num1 / 10;


		if (arr1[r] == 0)
		{
			arr1[r] = 1;
			sum1 = sum1 + r;
		}
		num1 = num1 / 10;

	}
	while (num2)
	{
		r = num2 % 10;
		num1 = num2 / 10;

		if (arr2[r] = 0)
		{
			arr2[r] = 1;
			sum2 = sum2 + r;

		}
		num2 = num2 / 10;
	}

	if (sum1 == sum2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;

}
























