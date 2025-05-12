/*
Write a Program to Remove All Characters From a String Except Alphabets

*/

#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;

	cin >> str;

	int k = 0;
	

	for (int i = 0;str[i]!='\0';i++) {


		if ((str[i] >= '65' && str[i] <= '90') || (str[i] >= '97' && str[i] <= '122'))
		{

			str[k] = str[i];
			k++;


		}
		str[k] = '\0';
		cout << str << endl;
		return 0;

	}

}