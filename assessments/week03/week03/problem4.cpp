
/*
Problem Statement 6
You are given an array arr[] of size N containing positive integers. Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.

📌 Constraints
1 ≤ N ≤ 100
1 ≤ arr[i] ≤ 1000 (for each element in the array)
1 ≤ K ≤ N
🧾 Input Format
The first line contains an integer N – the size of the array.
The second line contains N space-separated integers.
The third line contains an integer K – the group size for reversal.
🖨️ Output Format
Print the array after reversing every group of K consecutive elements.
🧪 Test Cases
✅ Test Case 1
Input:

6
1 2 3 4 5 6
3
Output:

3 2 1 6 5 4
✅ Test Case 2
Input:

10
1 2 3 4 5 6 7 8 9 10
3
Output:

3 2 1 6 5 4 9 8 7 10
✅ Test Case 3
Input:

6
1 2 1 5 5 6
3
Output:

1 2 1 6 5 5
✅ Test Case 4
Input:

6
1 2 3 4 5 6
3
Output:

3 2 1 6 5 4
✅ Test Case 5
Input:

100
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100
3
Output:

5 3 1 11 9 7 17 15 13 23 21 19 29 27 25 35 33 31 41 39 37 47 45 43 53 51 49 59 57 55 65 63 61 71 69 67 77 75 73 83 81 79 89 87 85 95 93 91 2 99 97 8 6 4 14 12 10 20 18 16 26 24 22 32 30 28 38 36 34 44 42 40 50 48 46 56 54 52 62 60 58 68 66 64 74 72 70 80 78 76 86 84 82 92 90 88 98 96 94 100

*/

#include <iostream>

int reverseGrp(int, int, int);

using namespace std;

void reverseGrp(int N, int arr[], int K)
{ 
    int i;
    int k;
   
    for (int i = 0; i < N; i += K) 
    {

        int left = i, right = min(i + K - 1, N - 1);

        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }

    }

}

int main() {
    int N;
    cout << " the size of the array:"<<endl;

    cin >> N;  
    cout << "enter the elements of the array:" << endl;
    cin >> N;
   
    
    int arr[100];  

    for (int i = 0; i < N; ++i) {

        cout << "reversal:" << endl;
        cin >> arr[i];
    }

    int K;
    
    cin >> K; 
  
    reverseGrp(N, arr, K);

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout  << endl;

    return 0;
}
