#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, a[105], ans(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int x = m-1, y = m+1;
	if (a[m]) ans++;
	while (x > 0 && y <= n) {
		if (a[x] && a[y]) ans += 2;
		x--, y++;
	}
	for (; x > 0; x--) if (a[x]) ans++;
	for (; y <= n; y++) if (a[y]) ans++;
	cout << ans << "\n";
    return 0;
}