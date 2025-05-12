/*

Write a Program to Remove Spaces From a String

*/


#include<iostream>

#include<string>

using namespace std;

int main() {

	string str;

	string val = " ";

	getline(cin, str);

	

	for (int i = 0;i < str.length();i++) {

		if(str[i]!=' ') {


			val += str[i];

		}



	}
	cout << val << endl;

	return 0;



}