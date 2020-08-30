#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    int t, n, x;
    string s[2];
    for (cin >> t; t--; ) {
        cin >> n >> s[0] >> s[1];
        int cur = 0;
        for (int i = 0; i < n; i++) {
            if (s[cur][i] > '2') {
                if (s[cur^1][i] <= '2') {
                    cur = 0;
                    break;
                }
                cur = cur^1;
            }
        }
        cout << (cur == 1 ? "YES\n" : "NO\n"); 
    }
}