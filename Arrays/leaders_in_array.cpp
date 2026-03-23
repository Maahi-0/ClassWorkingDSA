#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> leaders;
    int maxRight = arr[n - 1];
    leaders.push_back(arr[n - 1]); // rightmost is always a leader

    // Traverse from second-last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    // Sort in increasing order
    sort(leaders.begin(), leaders.end());

    for (int i = 0; i < leaders.size(); i++) {
        if (i > 0) cout << " ";
        cout << leaders[i];
    }
    cout << endl;

    return 0;
}
