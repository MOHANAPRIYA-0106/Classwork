#include<iostream>

using namespace std;

int main()
{
	int batteryStatus,mobileStatus;

	cout<<"mobileStatus(1/0):"<<endl;	
	cin>>mobileStatus;

	if (mobileStatus == 1)

	{

		cout << "batteryStatus(0-100):" << endl;
		cin >> batteryStatus;

		if (batteryStatus <= 10)
		{
			cout << "Put the mobile to charging" << endl;

		}

		cout << "open browser" << endl;

		cout << "Check today's live News" << endl;


	}
	else
	{
		cout << "powering on the mobile " << endl;
		mobileStatus = 1;
		cin>> mobileStatus;

		if (mobileStatus == 1)
		{
			cout << "batteryStatus(0-100):" << endl;
			cin >> batteryStatus;

			if (batteryStatus <= 10)
			{
				cout << "Put the mobile to charging" << endl;

			}

			cout << "open browser" << endl;

			cout << "Check today's live News" << endl;

		}
		else
		{
			cout << "Mobile is not in good condition " << endl;
			cout << "Or battery is dead" << endl;
			cout << "please check the mobile at the stores " << endl;
			

		}	
	}


}
