#include<bits/stdc++.h>
using namespace std;

int main() {
	int cas;
	cin >> cas;
	while (cas--) {
		int sum, dif;
		cin >> sum >> dif;
		int a = (sum + dif) / 2;
		int b = sum - a;
		if (a < 0 || b < 0 || (sum + dif) % 2 == 1)cout << "impossible" << endl;
		else if (a > b)cout << a << " " << b << endl;
		else cout << b << " " << a << endl;
	}
}