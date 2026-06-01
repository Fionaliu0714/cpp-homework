#include<bits/stdc++.h>
using namespace std;

bool prime(int a) {
	if (a <= 1)return false;//非質數
	if (a == 2)return true;//質數
	if (a % 2 == 0)return false;//非質數
	for (int i = 3; i * i <= a; i += 2) {
		if (a % i == 0)return false;//遍歷直到開根號的自己，偶數不用，所以是i=i+2
	}
	return true;
}
int main() {
	int n;
	while (cin >> n) {
		bool g1 = prime(n);
		//cout<<g1<<endl;

		int r = 0;
		int ori = n;
		while (n != 0) {
			r = r * 10 + n % 10;//取r前跟n後
			n = n / 10;//砍掉n最後一位
		}
		//cout<<r<<endl;
		bool g2 = prime(r);
		//cout<<g2<<endl;
		if (!g1) cout << ori << " is not prime." << endl;
		else if (g2 && r != ori) cout << ori << " is emirp." << endl;
		else cout << ori << " is prime." << endl;
	}
}


