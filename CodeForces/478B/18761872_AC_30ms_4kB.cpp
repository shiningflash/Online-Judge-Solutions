#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    ll p, t;
    cin >> p >> t;

    ll m = p + 1 - t;
    ll mx = (m * (m - 1)) >> 1;

    ll dv = p / t;
    ll md = p % t;
    ll mn = (md * ((dv * (dv + 1)) >> 1)) + (t - md) * ((dv * (dv - 1)) >> 1);
    
    cout << mn << " " << mx << "\n";
}