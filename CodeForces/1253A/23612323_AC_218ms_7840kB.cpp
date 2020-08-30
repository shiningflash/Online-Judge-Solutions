#include <bits/stdc++.h>
using namespace std;
 
const int mx = 1e6;
int a[mx], b[mx];
 
int main() {
	int t, n, m;
	for (cin >> t; t--; ) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		
		int i = 0, j = 0, dif = 0;
		bool f = true;
		
		while (i < n) {
			if (a[i] != b[i]) break;
			i++, j++;
		} 
		if (i < n) {
			dif = b[i] - a[i];
			if (dif < 0) f = false;
			else {
				while (i < n) {
					if (b[i] - a[i] != dif) break;
					i++, j++;
				}
			}
		}
		if (i < n) {
			while (i < n) {
				if (a[i] != b[i]) {
					f = false;
					break;
				}
				i++, j++;
			}
		}
		if (i != n) f = false;
		cout << (f ? "YES" : "NO") << endl;
	}
}