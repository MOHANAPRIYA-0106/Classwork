/*
Check if Three Angles can Form a Triangle
Problem:
Check if three given angles form a valid triangle.

Hint:
If sum of three angles == 180 degrees, return true.

Simple addition and comparison.

*/
#include <iostream>


bool isValidTriangle(int, int, int);


using namespace std;

bool isValidTriangle(int angle1, int angle2, int angle3) {
  
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180))
    
    {
        return true;
    }
    return false;
}

int main() {
    int angle1, angle2, angle3;

    cout << "Enter three angles of a triangle: "<<endl;


    cin >> angle1 >> angle2 >> angle3;

    if (isValidTriangle(angle1, angle2, angle3)) 
    
    {
        cout << "The angles form a valid triangle." << endl;
    }
    else {
        cout << "The angles do not form a valid triangle." << endl;
    }

    return 0;
}
