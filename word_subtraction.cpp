#include <bits/stdc++.h>
using namespace std;

int main() {
	string n; int k;
	cin >> n >> k;
    int _ = 0;
    while (_ < k) {
        ++_;
        if (n[n.size()- 1] != '0') {
            int num = stoll(n);
            --num;
            n = to_string(num);
        }
        else {
            n = n.substr(0, n.size() - 1);
        }
    }
    cout << n;
	return 0;
}
