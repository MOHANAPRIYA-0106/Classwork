#include<iostream>

using namespace std;

int main()

{
	int itr1, itr2, n;

	int count;

	cout << "Enter n value:";

	cin >> n;

	itr1 = 0;

	count = 1;

	while (itr1 < n)

	{

		itr2 = 0;

		while (itr2 < n)
		{

			if (count % n == 0)
				cout << count;

			else
				cout << count << "*";
			count++;

			itr2++;

		}
		cout << endl;
		itr1++;

	}

}