
/* 2) Write a program to Count number of ways to divide a number
in 4 parts.

Input Format :
First Line Of Input Contains T test cases
Second line of Input Contains a positive integer n,

Output Format :
Print the count number of ways for divison can take place.

Examples :

	Input :
	1
	5 = > 1 + 1 + 1 + 2

	Output: 1

	Input :
	1
	6
	2 + 2 + 1 + 1
	1 + 1 + 1 + 3
	Output : 2

	Input :

	8
	Output : 5
	1 + 1 + 1 + 5
	2 + 2 + 2 + 2
	2 + 2 + 1 + 3
	1 + 1 + 2 + 4
	3 + 3 + 1 + 1

*/
#include<iostream>

using namespace std;

int main()
{
	int n = 10;

	int count = 0;
	for (int num1 = 1;num1 <= n;num1++)
	{
		for (int num2 = 1;num2 <= n;num2++)
		{
			for (int num3 = 1;num3 <= n;num3++)
			{
				for (int num4 = 1;num4 <= n;num4++)
				{
					if (num1 + num2 + num3 + num4 == n)
					{
						count++;
						cout << num1 << "+" << num2 << "+" << num3 << "+" << num4 << endl;
					}

				}
			}
		}
	}


}














