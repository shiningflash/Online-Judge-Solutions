#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int n;
    string s;
    map<string, int> mp;
    for (cin >> n; n--; ) {
        cin >> s;
        cout << (mp[s] == 0 ? "NO\n" : "YES\n");
        mp[s]++;
    }
    return 0;
}
