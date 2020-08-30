#include <bits/stdc++.h>
using namespace std;

const int mx = 100005;
int par[mx];

int find(int r) {
    return (par[r] == r) ? r : par[r] = find(par[r]);
}

int main() {
    //freopen("in.txt", "r", stdin);
    int u, v;
    while ((scanf("%d", &u)) == 1) {
        for (int i = 0; i < mx; i++) par[i] = i;
        int ans(0);
        while (u != -1) {
            scanf("%d", &v);
            u = find(u);
            v = find(v);
            (u == v) ? ++ans : par[u] = v;
            scanf("%d", &u);
        }
        printf("%d\n", ans);
    }
    return 0;
}
