// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back

const int len = 1e5+5;
const int PI = acos (-1.0);

int main() {
    int n, m, q, x;
    cin >> n >> m;
    string s[n], t[m];
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> t[i];
    for (cin >> q; q--; ) {
        cin >> x;
        x--;
        cout << s[x%n] << t[x%m] << "\n";
    }
}