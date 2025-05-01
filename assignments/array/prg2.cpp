





#include <iostream>
#include <vector>
using namespace std;

int EquilIndex(const vector<int>& arr) {
    int n = arr.size();

   
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

   
    for (int i = 0; i < n; i++) {
        
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = EquilIndex(arr);

    if (result != -1) {
        cout << result << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
