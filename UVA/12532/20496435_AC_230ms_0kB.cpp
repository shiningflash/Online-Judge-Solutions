// @topic :: segment tree
// @author :: Amirul Islam

#include <bits/stdc++.h>
using namespace std;

const int mx = 100005;
int a[mx], tree[4*mx];

void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b+e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] * tree[right];
}

void update(int node, int b, int e, int i, int val) {
    if (b == e) {
        tree[node] = val;
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b+e) >> 1;
    if (i <= mid) update(left, b, mid, i, val);
    else update(right, mid+1, e, i, val);
    tree[node] = tree[left] * tree[right];
}

int query(int node, int b, int e, int i, int j) {
    if (b > j || e < i) return 1;
    if (i <= b && e <= j) return tree[node];
    int left = node << 1;
    int right = left | 1;
    int mid = (b+e) >> 1;
    return query(left, b, mid, i, j) * query(right, mid+1, e, i, j);
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n, q, x, y;
    char ch;
    while (~scanf("%d %d", &n, &q)) {
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < 0) a[i] = -1;
            else if (a[i] > 1) a[i] = 1;
        }
        memset(tree, 0, sizeof(tree));
        init(1, 1, n);
        while (q--) {
            cin >> ch >> x >> y;
            if (ch == 'C') {
                if (y < 0) y = -1;
                else if (y > 0) y = 1;
                update(1, 1, n, x, y);
            }
            else if (ch == 'P') {
                int ans = query(1, 1, n, x, y);
                if (ans > 0) printf("+");
                else if (ans < 0) printf("-");
                else printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}