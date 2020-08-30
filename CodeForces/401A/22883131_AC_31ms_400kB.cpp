#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;
int a[mx+5];

int main() {
	int n, m, x, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> x, sum += x;
	if (sum < 0) sum = -sum;
	int ans = sum / m;
	if (sum % m) ans++;
	cout << ans << endl;
    return 0;
}
