//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main() {
	vector<string> lines;
	string s;
	while (getline(cin, s)) {
		lines.push_back(s);
	}
	int maxlen = 0;
	for (int i = 0; i < lines.size(); i++) {
		if (lines[i].size() > maxlen) 
			maxlen = lines[i].size();
	}

	for (int col = 0; col < maxlen; col++) {
		for (int row = lines.size()-1; row >=0; row--) {
			if (col < lines[row].size())
				cout << lines[row][col];
			else
				cout << " ";
		}
		cout << endl;
	}
}
