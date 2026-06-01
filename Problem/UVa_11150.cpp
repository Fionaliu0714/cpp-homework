using namespace std;
#include<bits/stdc++.h>

int main() {
	int num;
	while (cin >> num) {
		int total = num;
		int empty = num;

		while (empty >= 3) {
			int newcola = empty / 3;
			total = total + newcola;
			empty = empty % 3 + newcola;
		}
		if (empty == 2) {
			total++;
		}
		cout << total << endl;

	}
}