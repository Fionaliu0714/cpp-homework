#include <iostream>
#include <algorithm> // 內含 __gcd 函式

using namespace std;

int main() {
    int N;
    // 當輸入不為 0 時持續處理
    while (cin >> N && N != 0) {
        long long G = 0; // 使用 long long 防止數值溢位
        
        // 按照題目要求的迴圈範圍累加
        for (int i = 1; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                G += __gcd(i, j);
            }
        }
        cout << G << "\n";
    }
    return 0;
}
