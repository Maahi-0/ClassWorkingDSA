#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minPrice = INT_MAX, maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;

        if (price < minPrice) {
            minPrice = price;           // update cheapest buy day
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // update best profit
        }
    }

    cout << maxProfite << endl;

    return 0;
}




