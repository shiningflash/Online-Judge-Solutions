#include <bits/stdc++.h>
using namespace std;
int n;

int sol(int n) {
	int cnt = 1, tmp = 1;
	while (tmp % n) {
		tmp = tmp * 10 + 1;
		tmp %= n;
		cnt++;
	}
	return cnt;
}

int main() {
	while(scanf("%d", &n) == 1) {
		printf("%d\n", sol(n));
	}
}