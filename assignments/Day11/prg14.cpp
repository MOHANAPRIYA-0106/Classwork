/*


Swap Two Numbers Using XOR Operator
Swap two integers without a third variable using only the XOR (^) operator

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap: a = " << a << ", b = " << b;
    return 0;
}