#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int odd = 0;
	while (getline(cin, str)) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '"' && odd % 2 == 0) {
				cout << "``";
				odd++;
			}
			else if (str[i] == '"' && odd % 2 == 1) {
				cout << "''";
				odd++;
			}
			else
				cout << str[i];
				
		}
		cout << endl;
	}
}