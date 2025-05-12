

#include<iostream>

using namespace std;

int main()

{
	int arrSize[20];

	int n;

	int low = 0;
	int high = 0;

	cout << "Enter the positive number:" << endl;

	cin >> n;

	for (int i = 1;i <= n - 1;i++) {

		cin >> arrSize[i];

		{
			if (high < arrSize[i]) {

				low = arrSize[i];

			}

			else if (low > arrSize[i]) {

				high = arrSize[i];
			}

			cout << arrSize[i] << endl;

			return 0;









		}


	}
}