#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[200][200];
	int n, m, x(0);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", s[i]);
		if (i > 0) {
			if (s[i][0] == s[i-1][0]) {
				cout << "NO\n";
				return 0;
			}
		}
		for (int j = 1; s[i][j]; j++) {
				if (s[i][j] != s[i][j-1]) {
					cout << "NO\n";
					return 0;
				}
			}
	}
	cout << "YES\n";
	return 0;
}