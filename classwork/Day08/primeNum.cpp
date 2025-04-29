
#include<iostream>

bool isPrime(int);

using namespace std;


int main()
{
	int num;
	cout << "Enter a number " << endl;
	cin >> num;

	bool ret = isPrime(num);

	if (ret==true)

	{
		cout << num << " is a prime number" << endl;
	}
	else
	{
		cout << num << " is not a prime number" << endl;
	}
	return 0;
}

bool isPrime(int num)
{
	bool flag = false;

	if(num<=1)
		return false;

	for (int itr1 = 2;itr1 <= num/2;itr1++)

	{
		if (num % itr1 == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}