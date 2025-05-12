

#include<iostream>

#include<cstring>
using namespace std;

int main()
{
	char str1[50];
	char str2[50];
	char ch[100];
	int val[26] = { 0 };

	int count = 0;

	cout << "Enter the strings:" << endl;

	cin >> str1;
	cin >> str2;

	for (int i = 0;i < 26;i++)

		val[i] = 0;

	if(strlen(str1)==strlen(str2){

		for (int i = 0;i < strlen(str1);i++) {

			val[str1[i] - 'a']++;
			val[str2[j] - 'a']--;
		}

		for (int i = 0;i < 26;i++)
		{
			if(val[i]==)






}