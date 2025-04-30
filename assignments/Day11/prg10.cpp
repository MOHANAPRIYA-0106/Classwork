/*
Stairway of Squares
Hint:

Each step involves summing the square of all previous steps.
Recursion Base Case: If n == 0, return 0 (no more steps).
Logic: For each step, return the square of n and add the sum of squares for the previous steps (n-1).
Example:
For n = 3, the sum of squares would be:

3^2 + 2^2 + 1^2 = 9 + 4 + 1 =




*/


#include <iostream>
using namespace std;

int stairwayOfSquares(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    return (n * n) + stairwayOfSquares(n - 1); // Recursive case
}

int main() {
    int n;

    cout << "Enter the number of steps: ";
    cin >> n;

    int result = stairwayOfSquares(n);

    cout << "Sum of squares up to " << n << " is: " << result << endl;

    return 0;
}