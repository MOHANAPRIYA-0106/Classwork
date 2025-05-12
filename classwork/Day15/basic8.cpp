

#include<iostream>

using namespace std;

int main()

{

	int rev = 0;

	int r;
	int n;

	cin >> n;

	int temp=n;

	while (n)
	{
		r = n % 10 ;

		rev = rev * 10 + r;

		n = n / 10;

	}

	if (temp==rev) {

		cout << "palindrome" << endl;

	}

	else {

		cout << "it is not a palindrome                      " << endl;


	}


}