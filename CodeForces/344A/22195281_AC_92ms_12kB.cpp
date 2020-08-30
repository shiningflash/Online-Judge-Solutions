#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n, x;
	cin >> n >> x;
	int ans(1), m = x % 10;
	for (int i = 0; i < n-1; i++) {
		cin >> x;
		x = x % 10;
		if (x != m) ans++;
		m = x;
	}
	cout << ans << "\n";
}