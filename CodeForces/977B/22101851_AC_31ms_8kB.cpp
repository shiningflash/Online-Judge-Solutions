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
    int n, mx(0);
    string s, ans;
    cin >> n >> s;
    map <string, int> mp;
    for (int i = 0; i < n-1; i++) {
        string a;
        a.push_back(s[i]);
        a.push_back(s[i+1]);
        mp[a]++;
        if (mp[a] > mx) mx = mp[a], ans = a;
    }
    cout << ans << "\n";
    return 0;
}