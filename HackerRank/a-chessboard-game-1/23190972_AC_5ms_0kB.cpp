// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define N 15

int a[N+1][N+1];

bool grundyNumber(int i, int j) {
	if (i > N || j > N || i < 1 || j < 1) return 1;
	if (a[i][j] != -1) return a[i][j];
	if (grundyNumber(i-2, j+1) && grundyNumber(i-2, j-1) 
	    && grundyNumber(i+1, j-2) && grundyNumber(i-1, j-2)) return 0;
	return 1;
}

inline void init() {
	memset(a, -1, sizeof(a));
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			a[i][j] = grundyNumber(i, j);
}

int main() {
    // freopen("in", "r", stdin);
 
	int t, n, m;
	for (init(), cin >> t; t--; ) {
		cin >> n >> m;
		cout << (a[n][m] ? "First" : "Second") << endl;
	}
}