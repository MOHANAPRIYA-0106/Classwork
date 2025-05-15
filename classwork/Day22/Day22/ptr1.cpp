/*y
 pointers means variable that stores a memory address of another variables sometimes its easier 
 to work with an address.

*/
#include<iostream>

using namespace std;

int main()
{
	int a[3] = { 1,2,3 };

	cout << a[0]<<" " << a[1] <<" " << a[2] << endl;

	int* ptr = nullptr;

		ptr = &a[0];
	//	ptr = &*(a + 0);
		cout << *(ptr) << endl;

		
		ptr = &a[1];				//ptr = (a + 1)		
	//ptr = &*(a + 1);
		cout << *(ptr+1) << endl;		//ptr = (ptr + 1);
		


		ptr = &a[2];		//&*(a+0)
	//ptr = &*(a + 2);
		cout <<*(ptr+2) << endl;


};
