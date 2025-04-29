#include<iostream>
#include <addition.h>
using namespace std;

int main()
{
	int Val1, Val2;
	int ret = 0;
	cout << "Enter the values of Val1 and val2:";
	cin >> Val1 >> Val2;

	ret = addition(Val1 , Val2);

	cout << "\n Addition of" << Val1 << "and" << Val2 << "=" <<ret<<endl;
	return 0;

}
