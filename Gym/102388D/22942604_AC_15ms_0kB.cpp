#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e5;

int main() {
	//freopen("in", "r", stdin);
	
	int n;
	char s[1000];
	for (scanf("%d", &n); n--; ) {
		scanf("%s", s);
		string ans = "";
		for (int i = strlen(s)-1; i >= 0; i--) {
			if (islower(s[i])) {
				s[i] = toupper(s[i]);
				if (s[i] + 13 > 90) ans.push_back((char) ((13 - 'Z' + s[i] - 1) + 'A'));
				else ans.push_back((char) (s[i] + 13));
			}
			else {
				s[i] = tolower(s[i]);
				if (s[i] + 13 > 122) ans.push_back((char) ((13 - 'z' + s[i] - 1) + 'a'));
				else ans.push_back((char) (s[i] + 13));
			}
		}
		cout << ans << endl;
	}
}