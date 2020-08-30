#include <bits/stdc++.h>
using namespace std;
#define mx 100005
 
int main() {
	string s;
	int n, x, y, q, l, r;
	char c;
	cin >> s;
	set<int> g[28];
	for (int i = 0; i < s.length(); i++) g[s[i]-'a'].insert(i+1);
	for (cin >> n; n--; ) {
		cin >> q;
		if (q == 2) {
			int ans = 0;
			cin >> l >> r;
			for (int i = 0; i < 26; i++)
				ans += (g[i].lower_bound(l) != g[i].upper_bound(r));
			cout << ans << endl;
		}
		else {
			cin >> x >> c;
			g[s[x-1]-'a'].erase(x);
			g[c-'a'].insert(x);
			s[x-1] = c;
		}
	}
	return 0;
}
