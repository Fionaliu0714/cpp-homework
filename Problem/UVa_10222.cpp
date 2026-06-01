#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while (getline(cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if ('A' <= str[i] && str[i] <= 'Z')str[i] += 32;
			if (str[i] == ' ') {
				cout << " ";
			}
			else {
				cout << table[table.find(str[i]) - 2];
			}
		}

		cout << "\n";
	}
}
