

#include <iostream>
	
using namespace std;

int main()

{
	int numPrime1;
	int numPrime2;
	int n;
	int i;
	int j;
	cout << "Enter a positive integer: ";
	cin >> n;
	int count = 0;
	for (int i = 2; i <= n / 2; i++)
	{
		numPrime1 = i;
		numPrime2 = n - numPrime1;
		bool flag = true;
		for (int j = 2; j <= numPrime1 / 2; j++)
		{
			if (numPrime1 % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			flag = true;
			for (int j = 2; j <= numPrime2 / 2; j++)
			{
				if (numPrime2 % j == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				cout << n << " = " << numPrime1 << " + " << numPrime2 << endl;
				count++;
			}


		}

	}

}

