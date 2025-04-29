#include<iostream>


using namespace std;

void display(void);
int displayRet(void);

void sumIntegers(int, int);
int subIntegers(int, int);

int main()

{
	int ch;
	//display();
	//cin >> ch;

	int a;
	int b;
	int r;

	switch (displayRet())
	{
	case 1:
		cout << "Addition" << endl;
		sumIntegers(10, 20);
		break;

	case 2:
		cout << "subraction" << endl;
		 r=subIntegers(5, 10);
		cout << a << " - " << b << " = " << (a - b) << endl;
		break;
	case 3:
		cout << "Multiplication" << endl;
		break;

	case 4:
		cout << "Division" << endl;
		break;

	case 5:
		cout << "exiting the app" << endl;
		break;
	default:
		cout << "Wrong choice" << endl;
		break;
	}
	return 0;
}



void display()
{
	int ch;
	cout<<"in the function displayRet"<<endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit" << endl;
	cout << "Enter your choice: ";

	cin>> ch;
	return ch;
	

}
void sumIntegers(int a, int b)
{
	cout << a << " + " << b << " = " << (a + b) << endl;

}

int subIntegers(int a, int b)
{
	int ret;
	ret = a - b;
	return ret;

}
