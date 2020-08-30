#include <bits/stdc++.h>
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define mp make_pair

int main() {
	int n, m, a, b, sum = 0;
	vector <pii> v;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v.pb(mp(b, a));
	}
	sort(v.begin(), v.end());
	for (int i = m-1; i >= 0 && n > 0; i--) {
		if (n >= v[i].second) sum += v[i].first * v[i].second, n-= v[i].second;
		else sum += v[i].first * n, n = 0;
	}
	cout << sum << endl;
}