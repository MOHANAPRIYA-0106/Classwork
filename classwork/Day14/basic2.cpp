
#include<iostream>

using namespace std;

int main()
{
	int start;
	int end;
	cout << "start" << endl;
	cin >> start;
	cout << "end" << endl;
	cin >> end;

	for (int i = start;i <= end;i++) {

		if (i % 2 != 0) {
			cout<<" " << "odd" << i;

		}
		else {
			cout <<" "<< "even" << i;
		}
	}
	



}