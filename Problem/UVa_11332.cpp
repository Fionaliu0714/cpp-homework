#include<stdio.h>
#pragma warning(disable:4996)

int get_digit(int k) {
	int sum = 0;
	while (k > 0) {
		sum = sum + k % 10;
		k = k / 10;
	}
	return sum;
}

int main() {
	int n = 0;
	while (scanf("%d", &n)!=EOF) {
		int out = n;
		if (n == 0)
			continue;
		while (out >= 10) {
			out = get_digit(out);
		}
		printf("%d\n", out);
	}
	return 0;
}