// do.... while

#include <iostream>
#define MAXBITES 10

using namespace std;

int main()
{
	int taste = 0;
	int plateEmty = MAXBITES;


	do
	{

		cout << "Have a bite of the food" << endl;
		plateEmty--;


		cout << "How is the taste(0/1)" << endl;
		cin >> taste;
	}

	while ((taste > 0) && (plateEmty>0));

	if (plateEmty == 0)

	{
		cout << "Person stoped eating as the plate was emty" << endl;

		cout << "the food was food" << endl;
	}
	if (taste == 0)
	{

		cout << " taste was not good enogh after eating" << (MAXBITES - plateEmty);

		cout << " bites of good " << endl;
	}
	
	return 0;
}

