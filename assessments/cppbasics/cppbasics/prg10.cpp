/*

Write a Program to Remove the Vowels from a String

*/

#include<iostream>

using namespace std;

int main() {

	string str;
	
	string val = "";


	cin >> str;


	int i = 0;

	while(str[i]!='\0') {

		char ch = str[i];

		if ((ch != 'a'&& ch != 'e'&& ch != 'i'&& ch != 'o'&& ch != 'u'&& ch != 'A'&& ch != 'E'&& 
			ch != 'I'&& ch != 'O'&& ch != 'U'))
		{
			val += ch;

		}
		i++;
	}

		cout << val << endl;

		return 0;
	

}