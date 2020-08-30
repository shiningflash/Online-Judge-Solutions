/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
 
const int len = 1e5+5;
const int Mod = 1e9+7;
const ll mx = 1ll<<32;
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    ll n, m, ans(0);
    vector <ll> s = {1};
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "add") ans += s.back();
        else if (str == "for") {
            cin >> m;
            if (m * s.back() > mx) s.push_back(mx);
            else s.push_back(m * s.back());
        }
        else if (str == "end") s.pop_back();
    }
    if (ans >= mx) cout << "OVERFLOW!!!\n";
    else cout << ans << endl;
    return 0;
}