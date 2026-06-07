#include <iostream>
#include <algorithm>

using namespace std;

// 函數：計算單一數字的 cycle-length
int getCycleLength(long long n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        length++;
    }
    return length;
}

int main() {
    int i, j;
    // 使用 while (cin >> i >> j) 處理 EOF 多筆輸入
    while (cin >> i >> j) {
        int max_cycle = 0;
        
        // 題目給的區間 i, j 大小順序不固定，必須找出最小值和最大值
        int start = min(i, j);
        int end = max(i, j);
        
        for (int n = start; n <= end; n++) {
            int current_cycle = getCycleLength(n);
            if (current_cycle > max_cycle) {
                max_cycle = current_cycle;
            }
        }
        // 依照題目要求的格式輸出
        cout << i << " " << j << " " << max_cycle << endl;
    }
    return 0;
}
