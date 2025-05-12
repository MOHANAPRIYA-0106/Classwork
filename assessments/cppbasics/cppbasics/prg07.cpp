/*
Write a Program to Find the Length of the String Without using strlen() Function

*/


#include<iostream>

#include<string>

using namespace std;

int main()

{
	string str;

	cin >> str;

	int count = 0;

	for (int i = 0;str[i] != '\0';i++) {

		count++;
	}

	cout << count << endl;


	return 0;




}

