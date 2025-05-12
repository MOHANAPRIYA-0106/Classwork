

#include<iostream>

using namespace std;

int main() {

	char s1[100];

	cin >> s1;

	int sum = 0;

	for (int i = 0;i < strlen(s1);i++) {

		if (isdigit(s1[i])) {

			sum += s1[i] - 48;
		}
		cout << sum << endl;
	}

}



