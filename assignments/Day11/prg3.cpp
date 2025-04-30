/*
Broken Clock
A magical clock only rings when the current minute is a divisor of the hour shown.
Given an hour value, print all minutes when the clock will ring.




*/

#include <iostream>
using namespace std;

int main() {
    int hour;
    cin >> hour;
    int minute = 1;
    while (minute <= 60) {
        if (hour % minute == 0) {
            cout << minute << " ";
        }
        minute++;
    }
    return 0;
}