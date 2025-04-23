
/*Input should be from start multiplication table to end of the multiplication table
* 
output:

start table=2
end table=3
2*1=2
*/

#include<iostream>

using namespace std;

int main()

{
	int num1;
	int num2;
	int start, end;

	cout << "Enter the start table:";
	cin >> start;
	cout << "Enter the end table:";
	cin >> end;
	for (int num1 = start;num1 <= end;num1++)
	{
		for (int num2 = 1;num2 <= 10;num2++)
		{
			cout << num1<< "*" << num2 << "=" << num1* num2 << endl;

		}
		cout << endl;
	}











}