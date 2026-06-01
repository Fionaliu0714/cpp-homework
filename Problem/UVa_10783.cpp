#include<bits/stdc++.h>
using namespace std;

int main() {
	int cas = 0;
	cin >> cas;
	int cas1 = 1;
	while (cas--) {
		int a, b = 0;
		int ans = 0;
		cin >> a >> b;
		if (a % 2 == 0) {
			a = a + 1;
		}
		if (b % 2 == 0) {
			b = b - 1;
		}
		for (int i = 0; a <= b; i++) {
			ans += a;
			a += 2;
		}
		cout << "Case " << cas1 << ": " << ans << endl;
		cas1++;
	}
}