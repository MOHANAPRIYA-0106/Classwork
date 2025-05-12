

#include<iostream>

using namespace std;

int main()

{
	int n = 7;
	int p = 1;
	
/*while (n != 1) {

		p = p * n;
		n = n - 1;
		
	
	}
	*/


	for (int i = 1;i <= n;i ++ ) {

		p *= i;

	}

	cout << "product" <<"  " << p << endl;

}