#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void solve() {
    int n, i;
    double p;
    cin >> n >> p >> i;

    // 當成功機率為0時，獲勝機率必為0
    if (p == 0) {
        cout << fixed << setprecision(4) << 0.0 << "\n";
        return;
    }

    double q = 1 - p;
    // 無窮等比級數公式：(q^(i-1) * p) / (1 - q^n)
    double ans = (pow(q, i - 1) * p) / (1 - pow(q, n));
    
    cout << fixed << setprecision(4) << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s;
    cin >> s;
    while (s--) {
        solve();
    }
    
    return 0;
}
