#include <bits/stdc++.h>
using namespace std;

int t, cas(0), n, a[22][3];

int getMinCost() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if ( i > 0) {
                if (j == 0) a[i][j] += min(a[i-1][j+1], a[i-1][j+2]);
                else if (j == 1) a[i][j] += min(a[i-1][j-1], a[i-1][j+1]);
                else if (j == 2) a[i][j] += min(a[i-1][j-1], a[i-1][j-2]);
            }
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < 3; i++) ans = min(ans, a[n-1][i]);
    return ans;
}

int main() {
    //freopen("in.txt", "r", stdin);
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        printf("Case %d: %d\n", ++cas, getMinCost());
    }
}
