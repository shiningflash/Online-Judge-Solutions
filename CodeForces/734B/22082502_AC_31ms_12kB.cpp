#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = min(a, min(c, d));
    a -= e, c -= e, d -= e; 
    ll sum = e * 256;
    e = min(a, b);
    sum += (e * 32);
    cout << sum << endl;
    return 0;
}