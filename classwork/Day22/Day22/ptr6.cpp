
#include<iostream>
using namespace std;
int main() {

	string name = "priya";
	int age = 22;
	string *ptrName = &name;

	int *ptrAge = &age;

	string arr[4] = { "home","car","food","money" };
	string * ptrArr = arr;

	cout << arr[0] <<"  " << arr[1] <<"  "  << arr[2] <<"  " << arr[3]<<"  " << endl;
	
	cout << *ptrName<<endl;			//memory address

	cout << ptrName << endl;

	cout << *ptrAge << endl;		//memory address

	cout << ptrAge << endl;

	string  *ptr1 = &arr[0];
	cout << *(ptr1) <<" - "<<ptr1<< endl;
	ptr1++;


	string* ptr2 = &arr[1];
	cout << *(ptr2)<< " - "<<ptr2<< endl;
	ptr2++;


	string* ptr3 = &arr[2];
	cout << *(ptr3) << " - "<<ptr3  << endl;
	ptr3++;

	string* ptr4 = &arr[3];
	cout << *(ptr4) << " - "<<ptr4 << endl;
	ptr4++;

}