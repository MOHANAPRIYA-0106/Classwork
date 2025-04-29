/*  
Storing odd elements in first  half of the array and even elements in second half of array

*/

#ifdef __INTELLISENSE__
#pragma diag_suppress 28

#endif


#include<iostream>	


using namespace std;

int main()

{
	int a[10] = {11,13,15,12,8,6,4,3,7,1};

	int i, countOdd, countEven;

	constexpr int noElems=sizeof(a)/sizeof(a[0]);

	int outputArr[noElems];


	cout<< "The number of elements in the array is: " << noElems << endl;

	for (i = 0, countOdd = 0; i < noElems;i++)

	{
		if (a[i] % 2 != 0)
		{

			outputArr[countOdd] = a[i];
			countOdd++;
		}
	}
	for (i = 0, countEven = 10 / 2; i < noElems;i++)

	{
		if (a[i] % 2 == 0)
		{

			outputArr[countEven] = a[i];
			countEven++;
		}


	}
	if (a[i] % 2 == 0)
	{
		outputArr[countOdd] = a[i];
		countOdd++;
	}
	for (i = 0;i < noElems;i++)
		cout << a[i] << endl;

	return 0;

		
}