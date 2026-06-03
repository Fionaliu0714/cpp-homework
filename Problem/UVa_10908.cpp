#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R, C, Q;
        cin >> R >> C >> Q;

        vector<string> grid(R);
        for (int i = 0; i < R; i++) {
            cin >> grid[i];
        }

        // 題目要求要先輸出 R C Q
        cout << R << " " << C << " " << Q << endl;

        while (Q--) {
            int r, c;
            cin >> r >> c;

            char ch = grid[r][c];

            int maxSize = 1;
            int layer = 1;

            while (true) {
                int top = r - layer;
                int bottom = r + layer;
                int left = c - layer;
                int right = c + layer;

                // 出界就停
                if (top < 0 || bottom >= R || left < 0 || right >= C)
                    break;

                bool ok = true;

                // 檢查上下邊
                for (int i = left; i <= right; i++) {
                    if (grid[top][i] != ch || grid[bottom][i] != ch) {
                        ok = false;
                        break;
                    }
                }

                // 檢查左右邊
                for (int i = top; i <= bottom && ok; i++) {
                    if (grid[i][left] != ch || grid[i][right] != ch) {
                        ok = false;
                        break;
                    }
                }

                if (!ok) break;

                maxSize += 2;
                layer++;
            }

            cout << maxSize << endl;
        }
    }

    return 0;
}