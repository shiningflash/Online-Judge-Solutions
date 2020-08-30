#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    ll a[3], sum, ans;
    for (int i = 0; i < 3; cin >> a[i], i++);
    sort(a, a+3);
    if (((a[0] + a[1]) * 2) <= a[2]) ans = (a[0] + a[1]);
    else ans = (a[0] + a[1] + a[2]) / 3;
    cout << ans << endl;
}