#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;
int a[mx+5];

int main() {
	int n, x, y, ans = 0;
	cin >> n;
	for (int i = 1; i < n; i++) cin >> a[i];
	cin >> x >> y;
	for (int i = x; i < y; i++) ans += a[i];
	cout << ans << endl;
    return 0;
}
