
#include<iostream>

using namespace std;

int main()

{

	int num, r;
	int base = 2;
	int sum = 0;
	int place = 0;

	cin >> num;

	while (num) {

		r = num % 10;

		sum+=r* pow(base, place);
		sum

		place++;

		num /= 10;


	}
	return sum;
}
