#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Base case for n == 1
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        // Calculate minimum possible value of max(a) - min(a)
        long long result = a[n-1] - a[0]; // max - min as a starting point

        // Consider max(a[i+1] - a[i]) (adjacent differences)
        for (int i = 0; i < n - 1; i++) {
            result = min(result, a[i + 1] - a[i]);
        }

        // Consider max(a[n-1] - a[0]), a[n-1] - a[1], and a[n-2] - a[0]
        result = min(result, a[n-1] - a[0]);
        result = min(result, a[n-1] - a[1]);
        result = min(result, a[n-2] - a[0]);

        cout << result << endl;
    }

    return 0;
}
