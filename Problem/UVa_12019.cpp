#include<bits/stdc++.h>
using namespace std;

int main() {
	int cas;
	cin >> cas;
	int doom[13] = { -1,10,21,7,4,9,6,11,8,5,10,7,12 };
	string ans[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	while (cas--) {
		int m, d;
		cin >> m >> d;
		int delta = (d - doom[m]) % 7;
		if (delta >= 0)cout << ans[delta] << endl;
		else cout << ans[delta + 7] << endl;
	}
}