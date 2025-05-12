

#include<iostream>

using namespace std;

int main()

{
	int year;

	cin >> year;

	if (year / 4 == 0 && year/100 || year%400 )
	{
		cout<<year << "it is a leap year" << endl;

	}
	else {
		cout << "it is not a leap year" << endl;

	}


}