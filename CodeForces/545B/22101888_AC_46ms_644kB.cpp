#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
#define fr first
#define sc second
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s, t, p;
	int c(0);
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[i]) p.push_back(s[i]);
		else {
			c++;
			if (c & 1) p.push_back(s[i]);
			else p.push_back(t[i]);
		}
	}
	if (c & 1) cout << "impossible\n";
	else cout << p << "\n";
    return 0;
}