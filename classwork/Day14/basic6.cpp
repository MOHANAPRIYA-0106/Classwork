
#include<iostream>

using namespace std;

int main()

{
	char str[] = "hello world!";

	int count = 0;

	while (str[count] != '\0') {

		count++;
	}
	cout << "String length:" <<count<< endl;
	
	return 0;


}