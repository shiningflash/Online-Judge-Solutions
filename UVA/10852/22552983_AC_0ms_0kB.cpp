#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4;
const int p = 1;
int a[mx+4];

void sieve() {
    for (int i = 2; i*i <= mx; i++) {
        if (!a[i]) {
            for (int j = i<<1; j <= mx; j+=i) a[j] = 1;
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int n, x;
    sieve();
    for (scanf("%d", &n); n--; ) {
        scanf("%d", &x);
        for (int i = x/2; i <= x; i++) {
            if (p*i <= x && (p+1)*i > x && !a[i]) {
                printf("%d\n", i);
                break;
            }
        } 
    }
    return 0;
}