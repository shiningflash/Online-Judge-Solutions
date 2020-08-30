#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e6;

int main() {
	// freopen("in", "r", stdin);
	
	map <char, char> mp;
	string s1, s2, str;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, str);
	for (int i = 0; i < 26; i++) mp[s1[i]] = s2[i];
	for (int i = 0; i < 26; i++) mp[toupper(s1[i])] = toupper(s2[i]);
	for (int i = 0; i < str.size(); i++) {
		if (mp[str[i]] > 0) cout << mp[str[i]];
		else cout << str[i];
	}
	cout << endl;

	return 0;
}