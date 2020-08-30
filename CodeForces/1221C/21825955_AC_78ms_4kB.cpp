#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll max(ll a, ll b) {
    if (a > b) return a;
    else return b;
}
 
ll min(ll a, ll b) {
    if (a < b) return a;
    else return b;
}
 
int main() {
    //freopen("in", "r", stdin);
    ll n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        ll k = min(a, b);
        ll f = (a - k) + (b - k);
        a = k;
        b = k;
        c = c + f;
        ll ans = min(a, min(b, c));
        //cout << ans << endl;
        ll ans2 = 0;
        if (c < k) {
            ll pp;
            //ll pp = (((k - c) / 3) + .5);
            if ((k - c) % 3 == 0) pp = (k - c) / 3;
            else pp = ((k - c) / 3) + 1;
            a = a-pp;
            b = b-pp;
            c = c+(pp*2);
            ans2 = min(a, min(b, c));
        }
        //cout << a << " " << b << " " << c << "\n";
        cout << max(ans, ans2) << endl;
    }
}