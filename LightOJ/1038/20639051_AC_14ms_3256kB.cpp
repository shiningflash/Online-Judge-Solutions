#include <bits/stdc++.h>
using namespace std;
#define mx 100005

int tst, t(0), n, m, a[mx];
double dp[mx];

void div() {
    for (int i = 2; i < mx; i++) {
        dp[i] = (a[i] + dp[i] + 2.0) / (a[i] + 1.0);
        for (int j = 2*i; j < mx; j += i) dp[j] += dp[i], a[j]++;
    }
}

int main() {
    div();
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        printf("Case %d: %.8lf\n", ++t, dp[n]);
    }
}