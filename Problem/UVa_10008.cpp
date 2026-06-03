/*#include<bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');//吃掉整行 //下次讀數字用getline就不需要ignore
	vector<int> freq(26, 0);
	int cnt = 0;
	while (cnt < num) {
		string line;
		if (!getline(cin, line)) break;
		for (unsigned char uc : line) {
			if (isalpha(uc)) {
				uc = toupper(uc);
				freq[uc - 'A']++;
			}
		}
		cnt++;
	}
	for (int count = *max_element(freq.begin(), freq.end()); count > 0; count--) {
		for (int i = 0; i < 26; i++) {
			if (count == freq[i]) {
				cout << char('A' + i) << " " << freq[i] << endl;
			}
		}
	}
}*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	string temp;
	getline(cin, temp);
	int num = stoi(temp);
	vector<int> freq(26, 0);
	int cnt = 0;
	while (cnt < num) {
		string line;
		if (!getline(cin, line)) break;
		for (char c : line) {
			unsigned char uc = c;
			if (isalpha(uc)) {
				uc = toupper(uc);
				freq[uc - 'A']++;
			}
		}
		cnt++;
	}
	for (int count = *max_element(freq.begin(), freq.end()); count > 0; count--) {
		for (int i = 0; i < 26; i++) {
			if (count == freq[i]) {
				cout << char('A' + i) << " " << freq[i] << endl;
			}
		}
	}
}