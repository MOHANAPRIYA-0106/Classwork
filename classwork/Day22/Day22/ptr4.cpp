

#include<iostream>
void revArr(int[], int);
void arrRevptr(int*, int);

void dispArr(int[], int);

using namespace std;

int main() {

	int list[] = { 10,20,30,40,50 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\tBefore" << endl;
	dispArr(list, cap);
	revArr(list, cap);
	cout << "\tAfter" << endl;
	dispArr(list, cap);

	cout << "\tAfter" << endl;
	arrRevptr(list, cap);
	dispArr(list, cap);


	return 0;

}

void dispArr(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << "\t" << a[i];
	cout << endl;
}

void revArr( int a[],int n) {

	int temp;


	for (int i = 0;i < n/2;i++)

	{
		temp = a[i];
		a[i] = a[n - i- 1];				// left pointer, right pointer
		a[n - i - 1] = temp;


	}

}

void arrRevptr(int* ptr, int n) {

	int temp;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while (start < end) {


		//logic to change the values
		temp = *start;
		*start = *end;
		*end = temp;

		//counter
		start++;
		end--;

	}

			//for(start=ptr,end=ptr+(n-1);start<end;start++,end--)

}
