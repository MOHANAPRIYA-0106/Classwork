/*
Calculator Using Switch-Case
Input two numbers and an operator (+, -, *, /).
Use switch to perform the operation.



*/



#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> b >> op;
    switch (op) {
    case '+': cout << (a + b); break;
    case '-': cout << (a - b); break;
    case '*': cout << (a * b); break;
    case '/':
        if (b != 0)
            cout << (a / b);
        else
            cout << "Division by zero error";
        break;
    default: cout << "Invalid Operator";
    }
    return 0;
}
