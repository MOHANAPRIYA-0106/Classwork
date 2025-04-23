#include<iostream>
using namespace std;

int* func(int);

//int* func(int v);

int main()

{
	int* ptr = NULL;
	ptr = func(10);
	cout << *ptr << endl;
	*ptr = 201;
	cout << *ptr << endl;

		return 0;


}

      int  *func(int v)
{

		  
		static int r = 100;
		r = r + v;
	    return & r;


}



/*

#include<iostream>

using namespace std;

int main()

{
	int a = 10;
	float b = 5.6;

	float result = a + b;

	cout << "result="<<(a+b) << endl;

	char num1 = 5;
	float num2 = 20.5;

	char result1 = num1 + num2;
	cout << "result1=" << (num1 + num2) << endl;


}
*/
/*


#include<iostream>
 
using namespace std;

void typeConvExp()

{
	int a = 30;
	int b = 2;
	float res= a/b;

	cout << res<< endl;

	res = (float)a/b;

	cout << res << endl;

	b = (float)a;
	cout << b << endl;

}
*/

