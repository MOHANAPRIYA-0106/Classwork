/*
Problem 1: Print Numbers from N to 1
Problem Statement:
Write a recursive function to print numbers from N down to 1.



#include<iostream>

void printNumbers(int n);

using namespace std;

void printNumbers(int n)

{

	int n = 0;

	if (n == 0) {

		cout << "Enter the number:" << endl;
		cin >> n;
		return;

	}


	cout << n << " ";

	printNumbers(n - 1);
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	printNumbers(n);
	cout << endl;
	return 0;

}
*/

#include <iostream>


void printNumbers(int);

using namespace std;


void printNumbers(int n)

{

	while (n >= 1)
	{
		cout <<"\n"<< n << " ";
		n--;
	
	}

	if (n <= 0) {
		return ;
	}

	std::cout << n << " enter number: ";
	cin >> n;

	 return printNumbers(n - 1);
}

int main() {

	int num;
	cout << "Enter a positive integer: ";
	cin >> num;
	
	printNumbers(num);

	cout << "number is enough" << endl;
	cout << endl;
	return 0;
}