#include<iostream>

using namespace std;


int main()
{

	int arr[] = { 2,3,5,5,7,10,30 };

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "enter the array:" << endl;

	for (int i = 0;i < n;i++) {

		cin >> arr[i];
	}

	for (int i = 0;i < n;i++) {

		for (int j = i+1;j < n;) {

			if (arr[i]==arr[j]) {

				// shifting of elements 

				int temp = arr[i];

				arr[j] = arr[j + 1];

				arr[j + 1] = temp;


			}
			else if (arr[j] == arr[j + 1]) {

				cout << arr[j] << "  " << arr[j + 1] << endl;
				cout << arr[i] << endl;
				return 0;

			}

		}


	}

}