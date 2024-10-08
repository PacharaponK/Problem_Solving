#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int robinGold = 0;
        int givingCount = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                robinGold += a[i];
            } else if (a[i] == 0 && robinGold > 0) {
                robinGold--;
                givingCount++;
            }
        }

        cout << givingCount << endl;
    }

    return 0;
}
