#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 加快輸入輸出
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b && (a != 0 || b != 0)) {
        int count = 0;
        int start = ceil(sqrt(a));
        int end = floor(sqrt(b));
        
        // 如果區間內存在完全平方數
        if (start <= end) {
            count = end - start + 1;
        }
        
        cout << count << "\n";
    }

    return 0;
}
