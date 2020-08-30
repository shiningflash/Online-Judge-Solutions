#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
queue<string> q;
int i(0);
string s = "";

void init() {
    for (char c = 'a'; c <= 'z'; c++) q.push((string) (s+c));
    //while (!q.empty()) cout << q.front() << "\n", q.pop();

    while (!q.empty()) {
        s = q.front(); q.pop();
        mp[s] = ++i;
        if (s.size() == 5) continue;
        for (char c = (char) (s[s.size()-1] + 1); c <= 'z'; c++) q.push((string) (s+c));
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    init();
    while (cin >> s) cout << mp[s] << "\n";
    return 0;
}
