#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> fighters(n);

        // อ่านค่า rating ของนักสู้แต่ละคน
        for (int i = 0; i < n; i++) {
            cin >> fighters[i];
        }

        // เรียงค่า rating จากมากไปน้อย
        sort(fighters.begin(), fighters.end(), greater<int>());

        // คำนวณค่า rating ที่เหลือของนักสู้คนสุดท้าย
        long long max_rating = fighters[0]; // เริ่มต้นด้วยนักสู้ที่มี rating สูงสุด

        for (int i = 1; i < n; i++) {
            max_rating -= fighters[i]; // หักค่า rating ของนักสู้ที่แพ้
        }

        // แสดงผลลัพธ์
        cout << max_rating << endl;
    }

    return 0;
}
