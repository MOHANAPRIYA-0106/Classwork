

#include<iostream>

int countVowel(char*);
using namespace std;

int countVowel(char* ptr)

{
	int count = 0;

	while (*ptr != '\0')

	{
		//logic to find vowels and count

		switch (*ptr)
		{

		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':

			count++;

		}

		ptr++;

	}


	return count;

}

int main() {


	/* string str;

	cin.getline(str, 1000);   */

	char str[100];

	cin.getline(str, 100);

	 //  cin.getline(str,199);

	/* for (int i = 0;i < strlen(str);i++)
	{
				//ascii
		cout << (int) str[i] << " = " << str[i] << endl;

		return 0;

		str[strlen(str) - 1] = '\0';

		cout << str << endl;


		for (int i = 0;i < strlen(str);i++)

			cout << (int)str[i] << " = " << str[i] << endl;
		return 0;


		*/
	
	cout << "Vowels count:" << countVowel(str) << endl;






}