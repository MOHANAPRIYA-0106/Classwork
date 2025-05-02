
/*
You are given an array A of N positive or negative integers. Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing). If no such index exists, return -1.

📌 Constraints
1 ≤ N ≤ 100
-1000 ≤ A[i] ≤ 1000
🧾 Input Format
The first line contains an integer N — the size of the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print a single integer — the index of the first equilibrium position, or -1 if it does not exist.
🧪 Test Cases
✅ Test Case 1
Input:

7
-7 1 5 2 -4 3 0
Output:

3
Explanation:

Sum before index 3 (i.e., -7 + 1 + 5) = -1
Sum after index 3 (i.e., -4 + 3 + 0) = -1
Both sides are equal → equilibrium index = 3
✅ Test Case 2
Input:

5
0 0 0 0 -1
Output:

4
Explanation:

Sum before index 4 (i.e., 0 + 0 + 0 + 0) = 0
No elements after index 4 → sum = 0
Both sides are equal → equilibrium index = 4
✅ Test Case 3
Input:

4
1 2 3 4
Output:

-1
Explanation:
No index has equal left and right sums.

✅ Test Case 4 (Corrected)
Let's provide a working case:

Input:

5
3 1 5 2 2
Output:

2
Explanation:

Index 2 → sum before: 3 + 1 = 4, sum after: 2 + 2 = 4


*/

#include <iostream>

int Equilibrium(int, int);

using namespace std;

int Equilibrium(int arr[], int N)
{
    int totalSum=0;

    for (int i = 0; i < N; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;


    for (int i = 0; i < N; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;


            leftSum += arr[i];
        }

        return -1;

    }
}
int main()
{
    int N;

    cout << "Enter the size of array:" << endl;
    cin >> N;  
    cout << "Enter the elements of the array:" << endl;

    int arr[100];  

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

   
    int result = Equilibrium(arr, N);
    cout << result << endl;

    return 0;
}
