#include<iostream>
#include<vector>
using namespace std;

int main() {
	int cas;
	cin >> cas;
	vector<int> f;
	f.push_back(1);
	f.push_back(2);
	while (true) {
		int next = f[f.size() - 1] + f[f.size() - 2];
		if (next > 100000000)break;
		f.push_back(next);
	}//建立費波納奇數列

	while (cas--) {
		int n;
		vector<int> ans(f.size(), 0);
		cin >> n;
		cout << n << " = ";
		for (int i = f.size() - 1; i >= 0; i--) {
			if (n >= f[i]) {
				n -= f[i];
				ans[i] = 1;
			}
		}
		bool started = false;
		for (int i = f.size() - 1; i >= 0; i--) {
			if (ans[i])started = true;
			if (started) cout << ans[i];
		}
		cout << " (fib)" << endl;
	}
}