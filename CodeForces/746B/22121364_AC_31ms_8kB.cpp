#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
	string s, ans = "";
	cin >> n >> s;
	for (int i = n-2; i >= 0; i -= 2) ans += s[i];
	for (int i = (n & 1 ? 0 : 1); i < n; i += 2) ans += s[i];
	cout << ans << "\n";
    return 0;
}