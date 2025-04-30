/*
Check Voting Eligibility
Input age. If >= 18, print "Eligible"; else, "Not Eligible".






*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "Eligible";
    }
    else {
        cout << "Not Eligible";
    }
    return 0;
}

