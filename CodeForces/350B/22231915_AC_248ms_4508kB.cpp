#include <bits/stdc++.h>
using namespace std;

const int mx = 100005;
int n, a[mx], b[mx];

int main() {
	//freopen("in.txt", "r", stdin);
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	map<int, int> mp;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		if (b[i]) mp[b[i]]++;
	}
	int mx = 0, mx_i = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i]) {
			int pos = i, tmp = 0;
			while (b[pos] && mp[b[pos]] == 1) pos = b[pos], tmp++;
			if (tmp >= mx) mx = tmp, mx_i = i;
		}
	}
	stack<int> s;
	s.push(mx_i);
	while (b[mx_i] && mp[b[mx_i]] == 1) {
		mx_i = b[mx_i];
		s.push(mx_i);
	}
	cout << s.size() << "\n" << s.top();
	s.pop();
	while (!s.empty()) cout << " " << s.top(), s.pop();
	cout << endl;
	return 0;
}