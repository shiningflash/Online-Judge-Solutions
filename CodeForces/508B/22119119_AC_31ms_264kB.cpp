#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
	cin >> s;
	int id = -1, len = s.size();
	for (int i = 0; i < len-1; i++) {
		if ((s[i] - '0') % 2) continue;
		if (s[i] < s[len-1]) {
			swap(s[i], s[len-1]);
			cout << s << "\n";
			return 0;
		}  
		id = i;
	}
	if (id == -1) cout << -1 << "\n";
	else {
		swap(s[id], s[len-1]);
		cout << s << "\n";
	}
    return 0;
}