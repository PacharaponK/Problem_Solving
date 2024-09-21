#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin >> p;
    
    int count = 1;
    vector<int> count_lst;
    bool found = false;
    
    for (int i = 0; i < p.size() - 1; ++i) {
        if (p[i] == p[i + 1]) {
            ++count;
        } else {
            if (count >= 7) {
                found = true;
                break;
            }
            count = 1;
        }
    }

    if (count >= 7) {
        found = true;
    }
    
    cout << (found ? "YES" : "NO");
    
    return 0;
}