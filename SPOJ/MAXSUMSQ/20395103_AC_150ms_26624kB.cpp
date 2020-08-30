
// kadane algorithm :: TC - O(N)
// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;

const int ln = 1000002;
int a[ln], sz, t, dp[ln], cnt[ln];

int maxSubArrSum_withStartEnd() {
    int mx = a[0];
    dp[0] = a[0];
    cnt[0] = 1;
    for (int i = 1; i < sz; i++) {
        int tmp = dp[i-1] + a[i];
        if (tmp == a[i]) dp[i] = tmp, cnt[i] = cnt[i-1] + 1;
        else {
            if (a[i] > tmp) dp[i] = a[i], cnt[i] = 1;
            else dp[i] = tmp, cnt[i] = cnt[i-1];
        }
        mx = max(mx, dp[i]);
    }
    long long ans(0);
    for (int i = 0; i < sz; i++)
        if (dp[i] == mx) ans += cnt[i];
    printf("%d %lld\n", mx, ans);
}

int main() {
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &sz);
        for (int i = 0; i < sz; i++) scanf("%d", &a[i]);
        maxSubArrSum_withStartEnd();
    }
}
