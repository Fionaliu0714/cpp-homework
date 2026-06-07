#include <iostream>

using namespace std;

int main() {
    long long S, D;
    // 讀取每筆輸入的 S 和 D 直到 EOF
    while (cin >> S >> D) {
        long long current_days = 0;
        long long current_group = S;
        
        while (current_days < D) {
            current_days += current_group; // 累加目前這團的天數
            if (current_days < D) {
                current_group++; // 如果天數還不到 D，人數加 1
            }
        }
        cout << current_group << endl;
    }
    return 0;
}
