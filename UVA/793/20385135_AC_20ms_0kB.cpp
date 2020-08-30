#include <bits/stdc++.h>
using namespace std;

int par[1000002];

inline int find(int r) {
    return par[r] == r ? r : par[r] = find(par[r]);
}

int main() {
    //freopen("in", "r", stdin);
    int t, n, m, u, v;
    char ch;
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) par[i] = i;
        getchar();
        int a(0), b(0);
        while (ch = getchar()) {
            if (!(ch == 'c' || ch == 'q')) break;
            scanf("%d %d", &u, &v);
            u = find(u); v = find(v);
            if (ch == 'c' && u != v) par[u] = v;
            else if (ch == 'q') (u == v) ? a++ : b++;
            getchar();
        }
        printf("%d,%d\n", a, b);
        if (t != 0) puts("");
    }
}