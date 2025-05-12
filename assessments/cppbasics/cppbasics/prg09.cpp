/*
	Write a Program to Count the Number of Vowels

*/

#include<iostream>

#include<string>

using namespace std;

int main() {

	string str;

	cin >> str;

	int count = 0;


	for (int i = 0;i < str.length();i++) {

		char ch=str[i];

		if ((ch == 'A') || (ch == 'a') || (ch == 'E') || (ch == 'e') || (ch == 'I') || (ch == 'i')
			|| (ch == 'O') || (ch == 'o')|| (ch == 'U') || (ch == 'u')) 
		{
				count++;
				
			}
		}

	cout << count << endl;

	return 0;
	}


