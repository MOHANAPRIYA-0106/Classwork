/*

Check if a Character is an Uppercase Letter
Take a character input and check if it is between 'A' and 'Z'.






*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Letter";
    }
    else {
        cout << "Not an Uppercase Letter";
    }
    return 0;
}