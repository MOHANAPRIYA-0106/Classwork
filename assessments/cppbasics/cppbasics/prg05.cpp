/*
Write a Program to Check Whether a Character is a Vowel or Consonant

*/

#include<iostream>

using namespace std;

int main()
{


	char ch;

	cin >> ch;

	

	if ((ch=='A')||(ch == 'a')||(ch == 'E')||(ch == 'e')||(ch == 'I')||(ch == 'i')||(ch == 'O')||(ch == 'o')
		||(ch == 'U')||(ch == 'u'))
	{
	
		cout << "its a vowel" << endl;


	}

	else {

		cout << "Its a consonant" << endl;

	}

}

