#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k; 

        if (k % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}
