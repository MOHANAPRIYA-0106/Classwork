
#include <iostream>	

using namespace std;  	

int f1(int); 

int main()

{
	int ret = 0;
	ret = f1(5);			//ret means assigning the value of f1(5) to ret

	cout << "ret = " << ret << endl;
	return 0;
}

int f1(int v)

{

	if (v <= 0)
		return 1;
	v--;
	f1(v);

	cout << v << endl;
	
}