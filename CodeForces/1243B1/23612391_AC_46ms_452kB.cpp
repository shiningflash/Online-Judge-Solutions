/*
    @author:     Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int mx = 1e5+4;
int a[mx];
 
int main() {
    //freopen("in", "r", stdin);
 
	int t, n;
	for (cin >> t; t--; ) {
		cin >> n;
		string a, b;
		cin >> a >> b;
		int x(-1);
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i] && x == -1) {
				x = i;
			}
			else if (a[i] != b[i]) {
				char tmp = b[i];
				b[i] = a[x];
				a[x] = tmp;
				break;
			}
		}
		//cout << a << " " << b << endl;
		if (a == b) cout << "Yes\n";
		else cout << "No\n";
	}
}