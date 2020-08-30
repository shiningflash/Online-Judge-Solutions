#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1e4

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s1, s2;
    int n, m, q;
    map<string, string> mp;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> s1 >> s2;
        mp[s1] = s2;
        mp[s2] = s1;
    }
    for (int i = 0; i < n; i++) {
        cin >> s1;
        if (s1.size() == mp[s1].size()) cout << s1;
        else if (s1.size() < mp[s1].size()) cout << s1;
        else cout << mp[s1];
        cout << (i == n-1 ? "\n" : " ");
    }
    return 0;
}
