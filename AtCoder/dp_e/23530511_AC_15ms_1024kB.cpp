// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 1e5+5;
const LLI INF = 1e10;

LLI dp[mx], w, val, N, W;

LLI max(LLI a, LLI b) {
    return (a > b ? a : b);
}

LLI knapsack(int N, int W) {
    for (int i = 0; i < mx; i++) dp[i] = INF;
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        scanf("%lld %lld", &w, &val);
        for (int j = mx; j >= 0; j--) {
            if (j >= val) dp[j] = min(dp[j], dp[j-val] + w);
        }
    }
    LLI ret = 0;
    for (int i = 0; i < mx; i++) {
        if (dp[i] <= W) ret = max(ret, i);
    }
    return ret;
} 

int main() {
    scanf("%lld %lld", &N, &W);
    printf("%lld\n", knapsack(N, W));
    return 0;
}