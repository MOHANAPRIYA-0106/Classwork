/*
Problem Statement 5
You are given an array A of positive integers. Your task is to find and print all the leaders in the array.

An element is considered a leader if it is greater than all elements to its right. The rightmost element is always considered a leader.

Return the list of leaders in the same order as they appear from right to left in the original array.

📌 Constraints
1 ≤ N ≤ 100
1 ≤ A[i] ≤ 1000 (where A[i] is the ith element of the array)
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print the leader elements of the array from **right to left** as they appear.
🧪 Test Cases
✅ Test Case 1
Input:

6
6 7 4 3 5 2
Output:

2 5 7
Explanation:

Start from right: 2 is a leader
5 > 2 → leader
3, 4 < 5 → not leaders
7 > 5 → leader
→ Leaders: 2, 5, 7
✅ Test Case 2
Input:

5
2 6 3 8 4
Output:

4 8
Explanation:

Start from right: 4 is a leader
8 > 4 → leader
3, 6, 2 < 8 → not leaders
→ Leaders: 4, 8
✅ Test Case 3
Input:

4
10 9 8 7
Output:

7 8 9 10
Explanation:

All elements to the left are larger than the right
→ All are leaders when printed from right to left
✅ Test Case 4
Input:

7
1 2 3 4 5 6 7
Output:

7
Explanation:

Only the last element (7) is the largest among all
→ Only one leader


*/

#include <iostream>
#include <vector>


using namespace std;

void findLeaders(int N, vector<int>& Arr)
{
   
    vector<int> leaders; 

    int maxArr = -1;

    for (int i = N - 1; i >= 0; --i) {

       
        if (Arr[i] > maxArr)
        {

            leaders.push_back(Arr[i]);
            maxArr = Arr[i];

        }
        else
		{
			continue; 
    }

    
        cout << leaders[i] << " "<<endl;

    }


}

int main()
{
    int N;
    cout<< "Enter the number of elements in the array: ";

    cin >> N; 

     cout<< "Enter the elements of the array: ";

    vector<int> arr(N);  

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];                                    // Read the array elements
    }


    findLeaders(N, arr);                                     // Find and print leaders

    return 0;
}

