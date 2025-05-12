
#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d, e,;

	int high=a;
	cin >> a >> b >> c >> d >> e;
	if (high < b) {
		high = b;
	}
	if (high < c) {
		high = c;
	}
	if (high < d) {
		high = d;
	}
	if (high < e) {
		high = e;
	}
	cout << high;
	return 0;

}