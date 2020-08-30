#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, k, ans = 0;
	string s[1550];
	cin >> n >> k;
	map<string, int> mp;
	for (int i = 0; i < n; i++) cin >> s[i], mp[s[i]]++;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			string tmp = "";
			for (int m = 0; m < k; m++) {
				if (s[i][m] == s[j][m]) tmp += s[i][m];
				else {
					if (s[i][m] == 'S') {
						if (s[j][m] == 'E') tmp += 'T';
						else if (s[j][m] == 'T') tmp += 'E';
					}
					else if (s[i][m] == 'E') {
						if (s[j][m] == 'S') tmp += 'T';
						else if (s[j][m] == 'T') tmp += 'S';
					}
					else {
						if (s[j][m] == 'E') tmp += 'S';
						else if (s[j][m] == 'S') tmp += 'E';
					}
				}
			}
			ans += mp[tmp];
		}
	}
	cout << (ans/3) << endl;
}
