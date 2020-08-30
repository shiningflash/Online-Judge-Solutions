#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, sum(0), tk;
	map <string, int> mp;
	string s;
	scanf("%d %d", &n, &m);
	while (n--) cin >> s >> tk, mp[s] = tk;
	while (cin >> s) {
		if (s == ".") printf("%d\n", sum), sum = 0;
		else sum += mp[s];
	}
}