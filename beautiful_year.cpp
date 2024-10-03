#include <bits/stdc++.h>
using namespace std;

int main() {
  set<char> y; 
  string yStr;
 
  int size = 0;
  int val;
  cin >> val;

  while (size != to_string(val).size()) {
    ++val;
    y.clear();
    string valString = to_string(val);
    for (char i : valString) {
      y.insert(i);
    }
    size = y.size();
    yStr = valString;
  }

  cout << yStr;

  return 0;
}
