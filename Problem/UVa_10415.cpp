#include<bits/stdc++.h>
using namespace std;

int main() {
	map<char, array<int, 10>> finger = {
		{'c', {0,1,1,1,0,0,1,1,1,1}},
		{'d', {0,1,1,1,0,0,1,1,1,0}},
		{'e', {0,1,1,1,0,0,1,1,0,0}},
		{'f', {0,1,1,1,0,0,1,0,0,0}},
		{'g', {0,1,1,1,0,0,0,0,0,0}},
		{'a', {0,1,1,0,0,0,0,0,0,0}},
		{'b', {0,1,0,0,0,0,0,0,0,0}},
		{'C', {0,0,1,0,0,0,0,0,0,0}},
		{'D', {1,1,1,1,0,0,1,1,1,0}},
		{'E', {1,1,1,1,0,0,1,1,0,0}},
		{'F', {1,1,1,1,0,0,1,0,0,0}},
		{'G', {1,1,1,1,0,0,0,0,0,0}},
		{'A', {1,1,1,0,0,0,0,0,0,0}},
		{'B', {1,1,0,0,0,0,0,0,0,0}}
	};

	int cas;
	cin >> cas;
	cin.ignore();
	while (cas--) {
		string a;
		getline(cin, a);

		array<int, 10> prev = { 0 };
		array<int, 10> ans = { 0 };

		for (char ch : a) {
			array<int, 10> now = finger[ch];

			for (int i = 0; i < 10; i++) {
				if (prev[i] == 0 && now[i] == 1) {
					ans[i]++;
				}
			}
			prev = now;
		}
		for (int i = 0; i < 10; i++) {
			cout << ans[i] << (i == 9 ? '\n' : ' ');
		}
	}
	return 0;
}