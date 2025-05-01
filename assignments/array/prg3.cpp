/*
Magic Square Verification:
Given an N x N matrix, determine if it is a magic square, meaning:
The sum of each row, column, and both diagonals is the same.
No duplicate numbers exist.
Here are some test cases for the Magic Square Verification problem:

Test Case 1: Valid Magic Square
Input:

3 3
8 1 6
3 5 7
4 9 2
Expected Output:

It is a Magic Square!
Explanation:
All rows, columns, and diagonals sum to 15.


*/





#include <iostream>
using namespace std;

bool magicSquare(int matrix[10][10], int N) {

    int target = 0;
    for (int j = 0; j < N; j++) {
        target += matrix[0][j];
    }

    for (int i = 0; i < N; i++) {
        int row = 0;
        for (int j = 0; j < N; j++) {
            row += matrix[i][j];
        }
        if (row != target) {
            return false;
        }
    }

    for (int j = 0; j < N; j++) {
        int col = 0;
        for (int i = 0; i < N; i++) {
            col += matrix[i][j];
        }
        if (col != target) {
            return false;
        }
    }

    int diagonal = 0;
    for (int i = 0; i < N; i++) {
        diagonal += matrix[i][i];
    }
    if (diagonal != target) {
        return false;
    }

    int diagonal2 = 0;
    for (int i = 0; i < N; i++) {
        diagonal2 += matrix[i][N - i - 1];
    }
    if (diagonal2 != target) {
        return false;
    }

    return true;
}

int main() {
    int N;
    cout << "Enter the size of the matrix (N): ";
    cin >> N;
    int matrix[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    if (magicSquare(matrix, N)) {
        cout << "It is a Magic Square!" << endl;
    }
    else {
        cout << "Not a Magic Square." << endl;
    }

    return 0;
}
