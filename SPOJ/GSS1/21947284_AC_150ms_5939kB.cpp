#include <bits/stdc++.h>
using namespace std;
#define mx 50008

int x, n, q, l, r;

struct data {
    int sum;
    int maxsum;
    int prefixsum;
    int suffixsum;
};

data tree[mx << 3];

data merge(data a, data b) {
    data z;
    z.sum = a.sum + b.sum;
    z.maxsum = max( (a.suffixsum + b.prefixsum), 
                        max(a.maxsum, b.maxsum) );
    z.prefixsum = max(a.prefixsum, a.sum + b.prefixsum);
    z.suffixsum = max(b.suffixsum, b.sum + a.suffixsum);
    return z;
}

void init(int node, int b, int e) {
    if (b == e) {
        scanf("%d", &x);
        tree[node].sum 
            = tree[node].maxsum 
            = tree[node].prefixsum 
            = tree[node].suffixsum 
            = x;
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = merge( tree[left], tree[right] );
}

data query(int node, int b, int e, int i, int j) {
    if (i == b && j == e) return tree[node];
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    if (j <= mid) return query( left, b, mid, i, j );
    else if (i > mid) return query( right, mid+1, e, i, j );
    else return merge( query( left, b, mid, i, mid ),
                              query( right, mid+1, e, mid+1, j ) );
}

int main() {
    while (scanf("%d", &n) == 1) {
        init(1, 1, n);
        for (scanf("%d", &q); q--; ) {
            scanf("%d %d", &l, &r);
            int ans = query( 1, 1, n, l, r ).maxsum;
            printf("%d\n", ans);
        }
    }
    return 0;
}