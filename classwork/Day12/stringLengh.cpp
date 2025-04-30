/*
implement the string length function .how to pass array to a function using counter value

*/


#include<iostream>	

#include<cstring>	

using namespace std;	

void display(int[], int);

int main()

{
	char name[20] = { '\0', };

	int i = 0, count = 0;

	cout << "Enter the name:";
	cin >> name;

	while (name[i] != '\0') {
		count++;
		i++;
	}
	cout << "Length of the string is:" << count << endl;
	


}