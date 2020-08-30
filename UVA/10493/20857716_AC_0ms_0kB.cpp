#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	while (scanf("%d %d", &n, &m)) {
		if (n == 0 && m == 0) break;
		printf("%d %d ", n, m);
		if (n == 1 && m == 1) puts("Multiple");
		else if (n == 1 && m != 1) puts("Impossible");
		else if ((m-1)%(n-1) == 0) printf("%d\n", (m-1)/(n-1) + m);
		else puts("Impossible");
	}
}