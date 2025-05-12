

#include<iostream>

using namespace std;

int main() {

	int n1 = 10;
	int n2 = 20;
	int r, q;

	int count = 0;

	while (true)

	{
		r = n2 % n1;

		if (r = 0) {

			break;

			n2 = n1;
			n1 = r;
			count++;


		}
		cout << "n1 is" << n1 << endl;
		cout << count << endl;


	}

	return 0;



}