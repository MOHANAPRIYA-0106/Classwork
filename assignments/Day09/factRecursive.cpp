/*     
	to generate 'n' factorial of a number using recursive function

*/

#include <iostream>

using namespace std;

int fact(int);						// function 

int main()

	{
	int ret = 0;
	int n = 0;
	cout << "Enter a number: ";
	cin >> n;
	ret = fact(n);			

	cout << "Factorial of " << n << " is " << ret << endl;
	return 0;
	}

int fact(int n)
{
	int ret = 1;
		if (n == 0 || n == 1)		
		return 1;
	else
			ret= n * fact(n - 1);

			// this line will not be executed
		cout << n << endl;			// this line will not be executed


}

