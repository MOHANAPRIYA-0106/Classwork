#include<iostream>

using namespace std;

int main() {

	int  *ptr=nullptr;

	int a = 20;
	
	

	cout << a<< endl;

	cout << ptr << endl;

	cout << &a << endl;

	cout << &ptr << endl;

	ptr = &a;

	cout << ptr;

	*ptr = 30;

	cout << a << endl;
	cout<< *ptr << endl;


}