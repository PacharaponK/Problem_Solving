#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    int count = 0;
    bool lucky = false;

    for (char i : n) {
        if (i == '4' || i == '7') {
            ++count;
        }
    }

    if (count == 4 || count == 7) {
        lucky = true;
    }

    cout << (lucky ? "YES" : "NO");
    return 0;
}
