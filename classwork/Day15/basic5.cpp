
#include<iostream>


#include<string>
using namespace std;

int main()

{
	

	char ch[] = { "This is a cpp programming" };

	char outstr[100];

	int i;
	int j = 0;

	
	for (int i = 0;i < strlen(ch);i++) {



		if (ch[i] == ' ') {

			continue;

		}

		else
		{

			outstr[j] = ch[i];
			j++;

		}

	}
		outstr[j] = '\0';

		cout << outstr << endl;
		return 0;

	}

	

	







