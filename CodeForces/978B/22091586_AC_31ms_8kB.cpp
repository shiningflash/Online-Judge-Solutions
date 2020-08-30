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
    int n, ans(0);
    string s;
    cin >> n >> s;
    for (int i = 2; i < n; i++) {
        if (s[i-2] == 'x' && s[i-1] == 'x' && s[i] == 'x') ans++;
    }
    cout << ans << "\n";
    return 0;
}