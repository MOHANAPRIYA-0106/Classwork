

#include<iostream>

using namespace std;

int main()
{
	int num, remind;

	int p = 0;
	double result=0;

	cout << "enter the any number" << endl;

	cin >> num;


	int oriNum = num;

	while (oriNum != 0) {
		oriNum /= 10;
	
	}

	while (oriNum != 0)
	{
		remind = oriNum % 10;

		result += pow(remind, p);

		oriNum /= 10;
	}
	if (result == oriNum) {
		cout <<num<<"  " << "its a armstrong" << endl;

	}
	else {
		cout <<num<<"  " << "its not a armstrong" << endl;

	}

}