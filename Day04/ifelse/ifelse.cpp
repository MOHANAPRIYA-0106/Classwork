#include<iostream>
#define MAXCAP 300
using namespace std;

int main()
{
	int  capCurrent, unusedCap=0;

	cout << "enter the current cap";

	cin >> capCurrent;

	unusedCap = MAXCAP - capCurrent;



	if (unusedCap==0)

	{
		cout << "  Storage is full" << endl;
		return 0;

		cout << "you can store items in the storage" << endl;
		
	
	}

	else if (unusedCap < 0)
	{
		cout << "Invalid input" << endl;
	}
	else if (unusedCap > 0 && unusedCap < 50)
	{
		cout << "you can store items in the storage" << endl;
	}
	else if (unusedCap >= 50 && unusedCap < 100)
	{
		cout << "you can store items in the storage" << endl;
	}
	else if (unusedCap > 0 && unusedCap < 100)
	{
		cout << "you can store items in the storage" << endl;
	}
	else if (unusedCap >= 100)
	{
		cout << "you can store items in the storage" << endl;
	}
	else
	{
		cout << "Invalid input" << endl;
	}
	return 0;




}