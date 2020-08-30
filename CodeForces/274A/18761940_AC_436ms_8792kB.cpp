#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    ll n, m, cnt(0);
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; cin >> a[i], i++);
    sort(a, a+n);

    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] == 0) {
            mp[a[i] * m] = 1;
            cnt++;
        }
    }
    cout << cnt << "\n";
}