#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ll n, a[7010], b[7010], sum = 0;
    bool z[7010];
    memset(z, 0, sizeof(z));
    map <ll, ll> m;
    vector <ll> vec;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) scanf("%lld", &a[i]), m[a[i]]++;
    for (int i = 1; i <= n; i++) scanf("%lld", &b[i]);
    map <ll, ll>::iterator it;
    for (it = m.begin(); it != m.end(); it++) if (it->second > 1) vec.push_back(it->first);
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 1; j <= n; j++) if ((vec[i] | a[j]) == vec[i]) z[j] = 1;
    }
    for (int i = 1; i <= n; i++) if (z[i]) sum += b[i];
    printf("%lld\n", sum);
    return 0;
}