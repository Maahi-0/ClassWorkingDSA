#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = n - 1;
    long long maxArea = 0;

    while (left < right) {
        long long h = min(arr[left], arr[right]);
        long long width = right - left;
        maxArea = max(maxArea, h * width);

        // Move the pointer with the smaller height
        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }

    cout << maxArea << endl;
    return 0;
}
