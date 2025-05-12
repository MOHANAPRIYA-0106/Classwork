/*

Write a Program to Toggle Each Character in a String

*/

#include<iostream>

#include<string>


using namespace std;

int main() {

	string str;

	getline(cin, str);

	for (int i = 0;i < str.length();i++)

	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);

		}
		else if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}

	cout << str << endl;

	return 0;


}