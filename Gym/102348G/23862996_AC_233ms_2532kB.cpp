// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PB push_back
#define FILE(in) freopen("in.txt", "r", stdin)

const int mx = 2e5+5;

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int ab[mx], ba[mx];

int main() {
    // FILE();
    FASTIO();

    int n, x = 0, y = 0;
    string s, t;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' && t[i] == 'b') ab[++x] = i+1;
        else if (s[i] == 'b' && t[i] == 'a') ba[++y] = i+1;
    }
    if ((x + y) & 1) cout << -1 << endl;
    else {
        if (x & 1) {
            cout << (x + y) / 2 + 1 << endl;
            for (int i = 1; i < x; i+=2) cout << ab[i] << " " << ab[i+1] << endl;
            for (int i = 1; i < y; i+=2) cout << ba[i] << " " << ba[i+1] << endl;
            cout << ab[x] << " " << ab[x] << endl;
            cout << ab[x] << " " << ba[y] << endl;
        }
        else {
            cout << (x + y) / 2 << endl;
            for (int i = 1; i < x; i+=2) cout << ab[i] << " " << ab[i+1] << endl;
            for (int i = 1; i < y; i+=2) cout << ba[i] << " " << ba[i+1] << endl;
        }
    } 
    return 0;
}
