#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t, n, k;
	for (cin >> t; t--; ) {
		int ans = 0;
		cin >> n >> k;
		for (int i = 1; i <= k; i++) ans = max(ans, n % i);
		cout << ans << endl;
	}
	
	return 0;
}