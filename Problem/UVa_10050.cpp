#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int N, P;
    cin >> N >> P;
    
    // 初始化陣列，days[i] 表示第 i 天是否發生罷工
    vector<bool> days(N + 1, false); 
    
    for (int i = 0; i < P; i++) {
        int h;
        cin >> h;
        // 將該政黨會罷工的所有日子標記為 true
        for (int day = h; day <= N; day += h) {
            days[day] = true;
        }
    }
    
    int lost_days = 0;
    for (int i = 1; i <= N; i++) {
        // 如果當天有罷工，且不是星期五與星期六
        if (days[i] && (i - 1) % 7 != 5 && (i - 1) % 7 != 6) {
            lost_days++;
        }
    }
    
    cout << lost_days << endl;
}

int main() {
    // 提升輸入輸出效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
