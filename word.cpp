#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s; cin >> s;
    float stop = s.size() / 2;
    int upper = 0 ; int lower = 0;
    for (int i : s) {
        isupper(i) ? upper++ : lower++;
    }
    if (upper > lower) {
        for (int i : s) {
            cout << (char)toupper(i); 
        }
    } else {
        for (int i : s) {
            cout << (char)tolower(i);
        }
    }
}