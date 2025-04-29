
/*
Scan the elements of an array for 10 integers check if a given number is present in the array .
tast1: scan the elements of an array for 10 integers

task2: to find  a given element to present in the array

*/


#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	int i;
	int num;
	int flag = 0; 
	
	cout << "Enter 10 integers: " << endl;
	for (i = 0; i < 10; i++)
	{
		
		cin >> arr[i];
		
	}

	cout << "Enter a number : "<<endl;
	cin >> num;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "a given element to present in the array " << i << endl;
	}

	else
	{
		cout << " is not given element to present in the array" << endl;
	}

	return 0;
}
	