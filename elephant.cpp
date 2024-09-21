#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x; cin >> x;
    int step = floor(x/5); 
    if (floor(x/5) >= 0) {
        x -= step * 5;
        if (x > 0) {
            step++;
        }
    }
    cout << step;
}