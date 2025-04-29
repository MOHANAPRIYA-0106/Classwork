
#include<iostream>

using namespace std;

int count0=0;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
int count6=0;
int count7=0;
int count8=0;
int count9=0;

int getdigits(long long int );				// we can use long int as well

int main()
{
	int count;
	long long int num;
	long long int temp, reminder;
	num = 34335276548;
	temp = num;

	while (temp)
	{
		reminder = temp % 10;

		switch (reminder)

		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		default:
			cout << "Invalid digit" << endl;
			break;
		}

		temp = temp / 10;
	}
	cout << "count 1:" << count0 << endl;
	cout << "count 2:" << count1 << endl;
	cout << "count 3:" << count2 << endl;
	cout << "count 4:" << count3 << endl;
	cout << "count 5:" << count4 << endl;
	cout << "count 6:" << count5 << endl;
	cout << "count 7:" << count6 << endl;
	cout << "count 8:" << count7 << endl;
	cout << "count 8:" << count8 << endl;
	cout << "count 9:" << count9 << endl;

	return 0;
}








	



