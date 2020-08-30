#include <bits/stdc++.h>
using namespace std;
 
int main() {
	map<int, int> m;
	int t, n;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) m[s[i] - '0']++;
	for (cin >> n; n--; ) {
		cin >> s;
		bool f = true;
		for (int i = 0; i < s.length(); i++) {
			if (m[s[i]-'0'] == 0) {
				f = false;
				break;
			}
		}
		cout << (f ? "Yes\n" : "No\n");
	}
	return 0;
}