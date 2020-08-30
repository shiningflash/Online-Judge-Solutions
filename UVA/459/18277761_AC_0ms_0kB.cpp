#include <bits/stdc++.h>
using namespace std;

int par[30];
int t, n, a, b;
char c[3];

int find(int r) {
	return (par[r] == r) ? r : par[r] = find(par[r]);
}

int main() {
//	freopen ("in", "r", stdin);

	for (scanf("%d\n\n", &t); t--; ) {
		gets(c);
		n = c[0] - 64;
		for (int i = 1; i <= n; par[i] = i, i++);
		while (gets(c) && c[0] != '\0') {
			a = (c[0] - 64);
			b = (c[1] - 64);
			if (find(a) != find(b)) par[find(a)] = find(b), n--;
		}
		cout << n << ((t != 0) ? "\n\n" : "\n");
	}
}
