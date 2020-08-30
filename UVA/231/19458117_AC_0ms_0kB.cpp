#include <bits/stdc++.h>
using namespace std;

int a[1005], dp[1005], p;

int __dp() {
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < p; i++) 
        for (int j = i+1; j < p; j++) 
            if (a[j] < a[i] && dp[j] < dp[i]+1)
                dp[j] = dp[i]+1;
    int ans = 0;
    for (int i = 0; i < p; i++) ans = max(ans, dp[i]);
    return ans+1;
}

int main() {
    int cas(0), n;
    while (cin >> n && n != -1) {
        p = 0;
        a[p++] = n;
        while (cin >> n && n != -1) a[p++] = n;
        if (cas > 0) puts("");
        printf("Test #%d:\n  maximum possible interceptions: %d\n", ++cas, __dp());
   }
}