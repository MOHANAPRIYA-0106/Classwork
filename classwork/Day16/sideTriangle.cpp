

#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for (int i = 0;i <= n;i++) {

		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
			int s = 2 * (n - i);

			for (int j = 0;j < s;j++)

				cout << "  ";

			for (int j = 0;j <= i;j++)

				cout << "* ";
		}
	}

	for (int i = n - 1;i >= 0;i--) {

		for (int j = 0;j <= i;j++)


			cout << "* ";


		for (int j = 0;j < ((2 * n) - (2 * i));j++) {

			cout << "  ";


			for (int j = 0;j <= i;j++)

				cout << "* ";
			cout << endl;

		}

	}
}
