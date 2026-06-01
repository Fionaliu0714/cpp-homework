#include<bits/stdc++.h>
using namespace std;

int main() {
	int cas;
	cin >> cas;
	while (cas--) {
		int num;
		cin >> num;
		int a[num];
		int ans = 0;
		for (int i = 0; i < num; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < num - 1; i++) {
			for (int j = 0; j < num - 1 - i; j++) {
				if (a[j] > a[j + 1]) {
					swap(a[j], a[j + 1]);
					ans++;
				}
			}
		}
		cout << "Optimal train swapping takes " << ans << " swaps." << endl;
	}
}