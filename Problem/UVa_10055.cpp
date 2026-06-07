#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    // 使用 while(cin >> a >> b) 來讀取未知的測資數量
    while (cin >> a >> b) {
        // 輸出兩數的絕對差值
        cout << abs(a - b) << endl;
    }
    return 0;
}
