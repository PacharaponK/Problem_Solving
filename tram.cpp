#include <bits/stdc++.h>
using namespace std;
		
int main() {
    int n; cin >> n;
    int tram = 0; int max_tram = 0;
    for (int _ = 0; _ < n ; ++_ ) {
        int entry; int exit;
        cin >> exit >> entry;
        tram -= exit;
        tram += entry;
        if (tram > max_tram) {
            max_tram = tram;
        }
    }
    cout << max_tram;
    return 0;
}
