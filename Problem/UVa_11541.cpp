#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main() {
	int cas;
	int ans = 1;
	cin >> cas;
	cin.ignore();
	string str;
	while (cas--) {
		
		getline(cin, str);
		cout << "Case " << ans << ": ";
		for (int i = 0; i < str.length();) {
			char c = str[i];
			i++;
			int num = str[i]-'0';
			i++;
			while (i < str.length() && isdigit(str[i])) {
				
				num*=10+(str[i]-'0');
				i++;
			}
			for (int j = 0; j < num; j++) {
				cout << c;
			}
			num=0;
		}
		cout << endl;
		ans++;
	}
}