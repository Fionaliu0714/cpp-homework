#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n,m;
int isodd(int num) {
	num = abs(num % 2);
	return num;
}
bool cmp(int a, int b) {

	int moda = a % m;
	int modb = b % m;
	if (moda != modb) {
		return moda < modb;
	}
	//bool aodd = a % 2 != 0;
	//bool bodd = b % 2 != 0;
	if (isodd(a) != isodd(b))return isodd(a);
	if (isodd(a))return a > b;
	return a < b;
}

int main() {
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			cout << "0 0" << endl;
			break;
		}
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, cmp);
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << endl;
		}

	}
	return 0;
}
