#include<iostream>

#include"isPrime.h"

using namespace std;

int main()
{
	int num;
	cout << "Enter a number " << endl;
	cin >> num;

	bool ret = isPrime(num);

	if (ret == true)

	{
		cout << num << " is a prime number" << endl;
	}
	else
	{
		cout << num << " is not a prime number" << endl;
	}
	return 0;
}

