#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    vector<int> x; vector<int> y; vector<int> z;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int xi; int yi; int zi;
        cin >> xi >> yi >> zi;
        x.push_back(xi); y.push_back(yi); z.push_back(zi);
    }

    int sumX = accumulate(x.begin(), x.end(), 0);
    int sumY = accumulate(y.begin(), y.end(), 0);
    int sumZ = accumulate(z.begin(), z.end(), 0);
    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}

    // auto printVector = [](const vector<int>& v) {
    //     for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    //     }
    // cout << endl;
    // };
    // printVector(x);
    // printVector(y);
    // printVector(z);
    
