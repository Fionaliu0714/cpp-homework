#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    
    // 讀取直到 EOF
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        double rx, ry;
        
        // 判斷哪兩個點是重複的點，並把它們當作 A 點（共同端點）
        if (x2 == x3 && y2 == y3) {
            rx = x1 + x4 - x2;
            ry = y1 + y4 - y2;
        } else if (x1 == x3 && y1 == y3) {
            rx = x2 + x4 - x1;
            ry = y2 + y4 - y1;
        } else if (x2 == x4 && y2 == y4) {
            rx = x1 + x3 - x2;
            ry = y1 + y3 - y2;
        } else if (x1 == x4 && y1 == y4) {
            rx = x2 + x3 - x1;
            ry = y2 + y3 - y1;
        }
        
        // 輸出結果，精確到小數點後三位
        cout << fixed << setprecision(3) << rx << " " << ry << endl;
    }
    
    return 0;
}
