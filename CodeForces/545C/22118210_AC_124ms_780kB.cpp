#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, ans(0), mx = INT_MIN;
	cin >> n;
	int a[n+5], b[n+5];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] - b[i] > mx) {
			mx = a[i], ans++;
			continue;
		}
		if (i == n-1) {
			ans++;
			continue;
		}
		if (a[i] + b[i] < a[i+1]) {
			mx = a[i] + b[i], ans++;
			continue;
		}
		mx = a[i];
	}
	cout << ans << "\n";
    return 0;
}