#include <bits/stdc++.h>
using namespace std;
#define mx 200000

int t, n, ind(0), a[mx], p[mx];

void prime() {
    memset(a, 0, sizeof(a));
    for (int i = 2; ind <= 15000; i++) {
        if (!a[i]) {
            p[++ind] = i;
            for (int j = 2*i; j < mx; j += i) a[j] = 1;
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    prime();
    for (scanf("%d", &t); t--; ) scanf("%d", &n), printf("%d\n", p[n]);
}