/*
use case of online shop using switch statement
for example flipkart.
*/
#include <iostream>
#include <string>	
using namespace std;
int main()
{
	int choice;
	cout << "Welcome to Flipkart" << endl;
	cout << "1. Electronics" << endl;
	cout << "2. Fashion" << endl;
	cout << "3. Home & Kitchen" << endl;
	cout << "4. Books" << endl;
	cout << "5. Sports" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You have selected Electronics." << endl;
		break;
	case 2:
		cout << "You have selected Fashion." << endl;
		break;
	case 3:
		cout << "You have selected Home & Kitchen." << endl;
		break;
	case 4:
		cout << "You have selected Books." << endl;
		break;
	case 5:
		cout << "You have selected Sports." << endl;
		break;
	}
			cout << "Invalid choice. Please select a valid option." << endl;
		return 0;
}
	
