#include<bits/stdc++.h>
using namespace std;

int main() {
	int cas;
	cin >> cas;
	int ans1 = 1;
	while (cas--) {
		int x[2], y[2];
		cin >> x[0] >> y[0] >> x[1] >> y[1];
		int source = (x[0] + y[0]) * (x[0] + y[0] + 1) / 2 + x[0];//先算出該點之前的謙一個三角形總共需要幾步，再加上x座標的值即可
		int des = (x[1] + y[1]) * (x[1] + y[1] + 1) / 2 + x[1];
		int ans2 = des - source;
		cout << "Case " << ans1 << ": " << ans2 << endl;
		ans1++;
	}
}