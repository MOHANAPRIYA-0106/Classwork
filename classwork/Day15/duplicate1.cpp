
#include<iostream>

using namespace std;


int main()
{

	int arr[] = { 2,3,5,5,7,10,30 };

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "enter the array:" << endl;


	for (int i = 0;i < n;i++) {

		for (int j = i + 1;j < n;) {

			if (arr[i] == arr[j]) {

				for (int k = j;k < n - 1;k++)							// shifting of elements 
				{
					arr[k] = arr[k + 1];

					n--;

				}

			}
			else {
				j++;

			}
			for (int i=0;i < n;i++) {
				cout << arr[i] << endl;

			}
		}
	}
}