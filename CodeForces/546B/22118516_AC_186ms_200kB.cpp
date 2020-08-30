#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x, ans(0), mx(0);
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) cin >> x, mp[x]++, mx = max(mx, x);
	for (int i = 0; i <= mx; i++) {
		if (mp[i] > 1) {
			int z = --mp[i];
			while (z--) {
				for (int j = i+1; j < 300000; j++) {
					ans++;
					if (mp[j] == 0) {
						mp[j]++;
						break;
					}
				}
			}
		}
	}
	cout << ans << "\n";
    return 0;
}