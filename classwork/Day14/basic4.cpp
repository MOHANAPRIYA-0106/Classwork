
#include<iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;

	if ((ch == 'A') || (ch == 'a') || (ch == 'E') || (ch == 'e') ||
		(ch == 'I') || (ch == 'i') || (ch == 'O') || (ch == 'o') ||
		(ch == 'U') || (ch == 'u'))
	{

		cout << ch << "it is a vowels"<<endl;
	}

	else {
		cout << ch << " " << "it is a alphabets"<<endl;
	}
	return 0;

	}




