</*
Convert Hours into Minutes and Seconds
Problem:
Write a function that converts hours into minutes and seconds.

Hint:

1 hour = 60 minutes.
1 minute = 60 seconds.
Multiply properly and print separately.
*/






#include <iostream>
using namespace std;

void convertHours(int hours) {

    if (hours < 0)
    {
        cout << "Invalid input. Hours cannot be negative." << endl;

        return;
    }

    int minutes = hours * 60;

    int seconds = minutes * 60;

    if (hours == 0)
    {
        cout << "0 hours is equal to 0 minutes and 0 seconds." << endl;
    }
    else if (hours == 1)
    {
        cout << "1 hour is equal to " << minutes << " minutes and " << seconds << " seconds." << endl;
    }
    else
    {
        cout << hours << " hours is equal to " << minutes << " minutes and " << seconds << " seconds." << endl;
    }
}

int main()
{
    int hours;

    cout << "Enter hours: ";
    cin >> hours;

    convertHours(hours);

    return 0;
}
