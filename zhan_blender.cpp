#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        if (n == 0) {
            cout << 0 << endl; 
            continue;
        }


        long long total_seconds = 0;
        
        if (x >= y) {
            total_seconds = (n + y - 1) / y;
        } else {
            long long full_cycles = (n + x - 1) / x;
            total_seconds = full_cycles;
        }

        cout << total_seconds << endl;
    }
    return 0;
}
