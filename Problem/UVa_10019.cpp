#include <iostream>
#include <string>

using namespace std;

// 計算二進位中 1 的個數（也可以手寫迴圈進行 %2 與 /2 的運算）
int count_ones(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) count++;
        n /= 2;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    
    // 將 n 視為十進位
    int b1 = count_ones(n);
    
    // 將 n 視為十六進位
    // 利用 string 輔助轉換，方便將其視為 16 進位的字面數值
    string s = to_string(n);
    int hex_val = stoi(s, nullptr, 16);
    int b2 = count_ones(hex_val);
    
    cout << b1 << " " << b2 << endl;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
