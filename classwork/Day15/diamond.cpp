

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "enter the number:" << endl;

	cin >> n;

	for (int i = 1;i <= n;++i)
	{
		for (int j = 1;j <= n - 1;++j) {

			for (int k = 1;k <= 2 * i - 1;++k) {

				cout << "*" << endl;
			}
			for (int i = 1;i <= n - 1;--i)
			{
				for (int j = 1;j <= n - 1;j++) {

					for (int k = 1;k <= 2 * i - 1;++k) {

						cout << "*" << endl;
					}
					return 0;
				}
			}

		}

	}
	