#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

void solve() {
    map<string, int> trees;
    string name;
    int total_trees = 0;

    // 持續讀取，直到遇到空行（代表該筆測資結束）
    while (getline(cin, name) && name != "") {
        trees[name]++;
        total_trees++;
    }

    // 輸出比例，設定小數點後 4 位
    for (auto const& [species, count] : trees) {
        double percentage = (double)count / total_trees * 100.0;
        cout << species << " " << fixed << setprecision(4) << percentage << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        string dummy;
        getline(cin, dummy); // 吃掉第一行的換行符號
        if (n > 0) {
            getline(cin, dummy); // 吃掉測資間的空行
        }

        for (int i = 0; i < n; ++i) {
            solve();
            if (i < n - 1) {
                cout << "\n"; // 測資間輸出空行
            }
        }
    }
    return 0;
}
