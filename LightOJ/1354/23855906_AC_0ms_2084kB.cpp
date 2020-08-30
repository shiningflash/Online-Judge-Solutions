#include <bits/stdc++.h>
using namespace std;

int f(int n) {
	int sum = 0, k = 1;
	while (n != 0) {
		if (n % 10 == 1) sum += k;
		k <<= 1;
		n /= 10;
	}
	return sum;
}

int main() {
	int a, b, c, d, w, x, y, z, t, cas(0);
	for (scanf("%d", &t); t--; ) {
		scanf("%d.%d.%d.%d", &a, &b, &c, &d);
		scanf("%d.%d.%d.%d", &w, &x, &y, &z);
		cout << "Case " << ++cas << ": " << ((f(w) == a && f(x) == b && f(y) == c && f(z) == d) ? "Yes\n" : "No\n");
	}
}