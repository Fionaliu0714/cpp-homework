#include<bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	int ans2 = 1;
	while (cin >> m >> n) {
		if (m == 0 || n == 0)break;
		if (ans2 > 1)cout << endl;
		char a[101][101] = {};
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int ans[101][101] = { 0 };
		int dx[8] = { -1,-1,-1,0,0,1,1,1 };
		int dy[8] = { -1,0,1,-1,1,-1,0,1 };
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '*') {
					for (int k = 0; k < 8; k++) {
						int x = i + dx[k];
						int y = j + dy[k];
						if (x >= 0 && x < m && y >= 0 && y < n && a[x][y] != '*') {
							ans[x][y]++;
						}
					}
				}
			}
		}
		cout << "Field #" << ans2 << ":" << endl;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '*')cout << "*";
				else cout << ans[i][j];
			}
			cout << endl;
		}
		ans2++;

	}
}
