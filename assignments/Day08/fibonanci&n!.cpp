/*     
		To generate fibonancci series  and factorial of a number
*/





#include<iostream>

using namespace std;

int fibo(int);



int fibo(int)
{
	int n;
	cout << "Enter the number :" << endl;
	cin >> n;
	return n;
}

int main()
{
	int i;
	int n1;
	int a = 0;
	int b = 1;
	int c = 0;
	// Fibonacci series
	cout << "Fibonacci series is: " << endl;

	for (int i = 1; i <= n1; i++)


	{
		cout << a << " ";

		c = a + b;
		a = b;
		b = c;
	}

	cout << endl;

	int fact = 1;

	for (int i = 1; i <= n1; i++)
	{
		fact *= i;
		return fact;
	}
	cout << "Factorial of " << n1 << " is: " << fact << endl;

	return 0;
}













 