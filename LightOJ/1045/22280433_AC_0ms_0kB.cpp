#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

double logn[mx];

void init() {
    logn[0] = 0;
    for (int i = 1; i <= mx; i++) logn[i] = logn[i-1] + log(i);
}

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    init();
    int t, n, b, cas(0);
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &b);
        int ans = (int) (logn[n] / log(b));
        printf("Case %d: %d\n", ++cas, ++ans);
    }
    return 0;
}