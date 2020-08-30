#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int t, a, b;
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &a, &b);
        printf("%d\n", __gcd(a, b));
    }
    return 0;
}