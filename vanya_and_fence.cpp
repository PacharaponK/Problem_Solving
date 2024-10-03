#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; int h;
  cin >> n >> h;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    x = (x > h) ? 2 : 1;
    a[i] = x;
  }
  cout << (accumulate(a.begin(), a.end(), 0));
  return 0;
}
