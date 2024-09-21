#include <bits/stdc++.h>
using namespace std;

int main() {
    int r; string s; 
    int danik = 0; int anthon = 0;
    cin >> r >> s;

    for (char i : s) {
        if (i == 'A') {
            ++anthon;
        }
        else {
            ++danik;
        }
    }
    // cout << danik << " " << anthon << endl;
    if (danik > anthon) {
        cout << "Danik";
    }
    else if (danik == anthon) {
        cout << "Friendship";
    }
    else {
        cout << "Anton";
    }
}