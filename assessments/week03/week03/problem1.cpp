
/*
You are given an array A of size N containing positive integers. For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.

📌 Constraints
2 ≤ N ≤ 100
All elements in the array are positive integers.

The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.

Print N space-separated integers — each representing the count of smaller elements to the right of the corresponding element in the array.
Test Case 1
Input:

5
5 4 3 2 1
Output:

4 3 2 1 0
Explanation:

5 has 4 smaller elements to its right: 4, 3, 2, 1
4 has 3: 3, 2, 1
3 has 2: 2, 1
2 has 1: 1
1 has 0

Test Case 2
Input:

5
1 2 3 4 5
Output:

0 0 0 0 0
Explanation:
No element has any smaller element to its right.

Test Case 3
Input:

6
5 3 7 1 2 6
Output:

3 2 3 0 0 0
Explanation:

5 → smaller on right: 3, 1, 2 → count = 3
3 → smaller on right: 1 → count = 1
7 → smaller on right: 1, 2, 6 → count = 3
1 → no smaller → count = 0
2 → no smaller → count = 0
6 → no smaller → count = 0

Test Case 4
Input:

4
4 4 2 1
Output:

2 2 1 0
Explanation:

4 → 2, 1 → count = 2
4 → 2, 1 → count = 2
2 → 1 → count = 1
1 → nothing → count = 0


*/

#include <iostream>

using namespace std;

int main()
{
	int arr[100];
	int n;
	int i;
	int j;
	cout << "Enter the size of the array: ";
	cin >> n;
	cout << "Enter the elements of the array: ";

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int count[100] = {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				count[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << count[i] << " ";
	}
	cout << endl;
	return 0;
	}


	

