// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
#define MP make_pair
#define FILEREAD() freopen("in", "r", stdin);
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl;

const int _mx = 2e5+5;
const LLI INF = 2e17+5;

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int par[_mx], cnt[_mx];
map <string, int> mp;

int find(int r) {
    return (par[r] == r ? r : par[r] = find(par[r]));
}

void make_friend(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        if (cnt[u] < cnt[v]) swap(u, v);
        par[v] = u;
        cnt[u] += cnt[v];
    }
    cout << cnt[u] << "\n";
}

void solve() {
    int n, node = 1;
    mp.clear();
    cin >> n;
    string a, b;
    cin.ignore();
    for (int i = 0; i < _mx; i++) {
        cnt[i] = 1;
        par[i] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (mp[a] == 0) mp[a] = node++;
        if (mp[b] == 0) mp[b] = node++;
        make_friend(mp[a], mp[b]);
    }
}

int main() {
    //FILEREAD();
    FASTIO();
    int t;
    for (cin >> t; t--; )
        solve();
    return 0;
}