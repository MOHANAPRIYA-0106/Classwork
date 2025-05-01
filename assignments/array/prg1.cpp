/*

Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found

*/

#include <iostream>

#include <vector>

void subArraySum(const vector<int>& arr ,int targetSum);
using namespace std;

void subArraySum(const vector<int>& arr, int targetSum) {
	int n = arr.size();
	int start = 0, end = 0, curr_sum = arr[0];

	while (end < n) {
		if (curr_sum == targetSum) {
			cout << "Sum found between indexes " << start << " and " << end << endl;
			return;
		}
		else if (curr_sum < targetSum) {
			end++;
			if (end < n)
				curr_sum += arr[end];
		}
		else {
			curr_sum -= arr[start];
			start++;
		}
	}

	cout << "No subarray found" << endl;
}

int main()
{
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;

	vector<int> arr(n);
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}


	int targetSum;
	cout << "Enter the target sum: ";
	cin >> targetSum;

	subArraySum(arr, targetSum);

	return 0;
}


