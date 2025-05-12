/*

Write a Program to Print Check Whether a Character is an Alphabet or Not

*/

#include<iostream>

using namespace std;

int main() {

	char ch;

	cin >> ch;


	if ((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
	{

		cout << "It is a alphabet" << endl;

		}

	else {
		cout << "It is not an alphabet" << endl;

	}

	return 0;


}