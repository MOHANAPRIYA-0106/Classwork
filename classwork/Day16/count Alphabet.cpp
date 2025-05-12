
#include<iostream>

#define MAX 200;
using  namespace std;

int main()

{
	string str;
	
	int val[26] = { 0 };
	
	char ch[200];

	int count = 0;

	cout << "Enter the string" << endl;

	cin >> str;

	for (int i = 0;i < 26;i++)
	{
		val[i] = 0;

		{

			for (int i = 0;i < strlen(ch);i++)

			{
				val[ch[i] - 'a']++; {

					for (i = 0;i < 26;i++)

					{
						if (val[i] > 0) {

							cout << char(i + 'a') << " - " << val[i] << endl;

						}

					}
				}
			}
		}
	}




