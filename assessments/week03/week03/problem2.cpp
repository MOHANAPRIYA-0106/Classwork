
/*

You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.

📌 Constraints
The array is sorted in non-decreasing order.
1 ≤ N ≤ 10^5 (N is always odd)
if possible try to solve considering bellow 2 conditions
Time Complexity: O(N)
Do not use extra memory (i.e., no additional data structures like hash maps, sets, or arrays)
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print the unique element that appears only once.
🧪 Sample Test Case
Input:

7
3 3 4 4 5 5 7
Output:
7
🧠 Explanation
In the array 3 3 4 4 5 5 7, all elements appear twice except for 7, which appears only once. Hence, the output is 7.
Test Case 1
Input:

9
1 1 2 2 3 4 4 5 5
Output:

3
Explanation:
All elements appear twice except for 3, which appears only once. Hence, the output is 3.

Test Case 2
Input:

11
0 0 1 1 2 2 6 6 7 7 9
Output:

9
Explanation:
The number 9 appears only once at the end of the array. All other elements appear in pairs.

Test Case 3
Input:

5
-10 -10 -3 -3 0
Output:

0
Explanation:
Negative numbers -10 and -3 appear twice. The element 0 appears only once.

Test Case 4
Input:

7
3 3 4 4 5 5 7
Output:

7
Explanation:
In the array 3 3 4 4 5 5 7, all elements appear twice except for 7, which appears only once. Hence, the output is 7.
*/


#include <iostream>

int uniqueElement(int arr[], int n);

using namespace std;

int uniqueElement(int arr[], int n)
{
	int i;
	int Ele = -1;								// Initialize with a default value

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || arr[i] != arr[i - 1]) {
			Ele = arr[i];
		}
	}
	return Ele;
}

int main() {

	int n;
	int arr[100];								


	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: ";



	for (int i = 0; i < n; i++)
	{

		cin >> arr[i];
	}


	int uniqueElement = -1;									// Initialize with a default value
	for (int i = 0; i < n; i++)

	{

		if (i == 0 || arr[i] != arr[i - 1])

		{
			uniqueElement = arr[i];

		}
	}

	cout << uniqueElement << endl;

	return 0;
}






















