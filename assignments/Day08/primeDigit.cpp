/*

find the nth number madeup of my prime digits only

given number N = 10
output: 33

 1 2 3 4 5 6 7 8 9 10  count=4

	11 12 13 14 15 16 17 18 19 20 count=8

	21 22 23 24 25 26 27 28 29 30 count=12

	31 32 33 34 35 36 37 38 39 40 count=16

	*/



#include<iostream>

using namespace std;

int main()

{
	int n;
	cout << "Enter the number :" << endl;
	cin >> n;

	int count = 0;
	int i = 1;
	while (count < n)
	{
		int num = i;
		bool flag = true;
		while (num > 0)
		{
			int num1= num % 10;
			if (num1 != 2 && num1 != 3 && num1 != 5 && num1 != 7)
			{
				flag = false;
				break;
			}
			num /= 10;
		}
		if (flag)
		{
			count++;
		}
		i++;
	}
	cout << n << "th number of prime digits is: " << i - 1 << endl;
	,
	return 0;
}







