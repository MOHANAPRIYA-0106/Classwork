/*
create various movie genre using switch statement
*/
#include <iostream>
using namespace std;

int main() {
	int genre;
	cout << "Enter a number (1-5) for movie genre:\n";
	cout << "1. Action\n";
	cout << "2. Comedy\n";
	cout << "3. Drama\n";
	cout << "4. Horror\n";
	cout << "5. Sci-Fi\n";
	cin >> genre;

	switch (genre) {
		case 1:
			cout << "You chose Action!\n";
			break;
		case 2:
			cout << "You chose Comedy!\n";
			break;
		case 3:
			cout << "You chose Drama!\n";
			break;
		case 4:
			cout << "You chose Horror!\n";
			break;
		case 5:
			cout << "You chose Sci-Fi!\n";
			break;
		default:
			cout << "Invalid choice! Please enter a number between 1 and 5.\n";
	}

	return 0;
}