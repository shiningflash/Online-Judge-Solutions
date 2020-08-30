#include <bits/stdc++.h>
using namespace std;
#define mx 50005

struct data {
    int sum, maxsum, presum, sufsum;
} tree[mx << 3];

data merge(data a, data b) {
    data cur;
    cur.sum = a.sum + b.sum;
    cur.maxsum = max( (a.sufsum + b.presum),
                    max(a.maxsum, b.maxsum) );
    cur.presum = max(a.presum, a.sum + b.presum);
    cur.sufsum = max(b.sufsum, b.sum + a.sufsum);
    return cur;
}

void init(int node, int b, int e) {
    if (b == e) {
        int x;
        scanf("%d", &x);
        tree[node].sum
            = tree[node].maxsum
            = tree[node].presum
            = tree[node].sufsum
            = x;
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = merge(tree[left], tree[right]);
}

data query(int node, int b, int e, int i, int j) {
    if (i == b && j == e) return tree[node];
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    if (j <= mid) return query(left, b, mid, i, j);
    else if (i > mid) return query(right, mid+1, e, i, j);
    else return merge( query(left,b, mid, i, mid), 
                query(right, mid+1, e, mid+1, j) );
}

int main() {
    int n, q, l, r, ans;
    scanf("%d", &n);
    init(1, 1, n);
    for (scanf("%d", &q); q--; ) {
        scanf("%d %d", &l, &r);
        ans = query(1, 1, n, l, r).maxsum;
        printf("%d\n", ans);
    }
}