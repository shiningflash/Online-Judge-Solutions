#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

ll tree[mx*4];

void init(int node, int b, int e) {
    if (b == e) {
        ll x; scanf("%lld", &x);
        tree[node] = x;
        return;
    }
    int left = node << 1, right = left | 1, mid = (b + e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
}

ll query(int node, int b, int e, int i, int j) {
    if (i > j) return 0;
    if (i == b && j == e) return tree[node];
    int left = node << 1, right = left | 1, mid = (b + e) >> 1;
    return query(left, b, mid, i, min(mid, j)) + query(right, mid+1, e, max(i, mid+1), j);
}

void update(int node, int b, int e, int i, int j) {
    if (tree[node] == e - b + 1) return;
    if (b > j || e < i) return;
    if (b == e) {
        tree[node] = floor (sqrt(tree[node]));
        return;
    }
    int left = node << 1, right = left | 1, mid = (b + e) >> 1;
    update(left, b, mid, i, j);
    update(right, mid+1, e, i, j);
    tree[node] = tree[left] + tree[right];
}

int main() {
    //freopen("in", "r", stdin);
    int n, t(0), q, x, l, r;
    while (scanf("%d", &n) != EOF) {
        init(1, 1, n);
        printf("Case #%d:\n", ++t);
        for (scanf("%d", &q); q--; ) {
            scanf("%d %d %d", &x, &l, &r);
            if (l > r) l ^= r ^= l ^= r;
            if (x) printf("%lld\n", query(1, 1, n, l, r));
            else update(1, 1, n, l, r);
        }
        printf("\n");
    }
    return 0;
}