/*

#include<iostream>

using namespace std;

int main()

{
	int x = 10;

	int y = x++;

	int z = ++x;

	cout << x << endl;

	cout << y << endl;

	cout << z << endl;

	return 0;

}
*/

#include<iostream>

using namespace std;

int main()

{
	int x = 10;

	int y = x++;		//post increment

	int z = ++x;		//pre increment

	std::cout <<"\n" << x;

	std::cout << "\n" << y;

	std::cout << "\n" << z;

	return 0;

}