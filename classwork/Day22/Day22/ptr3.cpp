

#include<iostream>

using namespace std;

int sumArr(int*, int n);

int main() {

	int list[] = { 1, 2, 3, 4, 5 };

	int cap = sizeof(list) / sizeof(list[0]);

	cout << "\t" << sumArr(list, cap) << endl;
}

int sumArr(int*ptr, int n){

	int sum = 0;

	/*logic to caklculate sum ofthe list

	for (int i = 0;i < n;i++)

		sum += ptr[i];*/

	//pointer notation

	for (int i = 0;i < n;i++)

		sum += *ptr;

	ptr++;

	return ;

}