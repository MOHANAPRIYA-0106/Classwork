

#include<iostream>
#include<cstring>

using namespace std;

int main()

{
	int id = 0;
	//int itr1, itr2 = 0;				// a , b, c are used to store integer values

	char firstName[100] = { '\0', }, secName[100] = { '\0', };

	int _id = 0;

	int itr1 = 101, itr2 = 0;

	memset(firstName, '\0', sizeof(firstName));

	for (int itr2 = 0; itr2 < 10;itr2++);
	cout << itr2 << endl;

	cout << itr2 << endl;


	strcat(firstName, "priya");
	cout << firstName << endl;
	register int i;

	for (int i = 0; i < 100;i++);

	

	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	{
		int itr1 = 200;
		cout << itr1 << endl;
		cout << firstName << endl;
		cout << &firstName << endl;
	}
	cout << &firstName << endl;





}
