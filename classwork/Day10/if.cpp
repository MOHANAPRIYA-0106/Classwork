#include<iostream>


using namespace std;

int main()
{
	int charge;

	cout << "Enter the charge percentage:" << endl;
	cin >> charge;

	if (charge < 10) {

		cout << "charge is low" << endl;

		cout << "Please charge the battery" << endl;

	}

	else
	{

		cout << "charge is ok" << endl;

	cout << "You can use the device" << endl;
	}
	return 0;
}