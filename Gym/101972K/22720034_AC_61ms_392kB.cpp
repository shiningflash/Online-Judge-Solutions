/*
    @author : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1e5+5;
char a[mx], b[mx], c[mx], d[mx];

int main() {
    //freopen("in", "r", stdin);

	int t, n;
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		scanf("%s", a);
		scanf("%s", b);
		int l = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				c[l] = a[i];
				d[++l] = b[i];
			}
		}
		d[0] = d[l];
		bool f = 0;
		for (int i = 0; i < l; i++) {
			if (c[i] != d[i]) {
				f = 1;
				break;
			}
		}
		cout << (f ? "NO\n" : "YES\n");
	}
    return 0;
}