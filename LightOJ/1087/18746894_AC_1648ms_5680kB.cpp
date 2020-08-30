#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 2e5+5;
int tree[mx*4], n;

void init(int node, int b, int e) { 
    if (b == e) {
        if (b <= n && e <= n) {
            tree[node] = 1;
            return;
        } else return;
    }
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
    return;
}  

int query(int node, int b, int e, int pos) {
    if (tree[node] < pos) return -1;
    if (b  == e) return b;
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    if (pos <= tree[left]) return query(left, b, mid, pos);
    else return query(right, mid+1, e, pos-tree[left]);
}

void update(int node, int b, int e, int pos, int val) {
    if (pos > e || pos < b) return;
    if (b == e) {
        tree[node] = val;
        return;
    }
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    update(left, b, mid, pos, val);
    update(right, mid+1, e, pos, val);
    tree[node] = tree[left] + tree[right];
}

int main() {
    int t = 1, tst, x, q, p, k;
    string s, ch;
    for (scanf("%d", &tst); tst--; ) {
        memset(tree, 0, sizeof(tree));
        scanf("%d %d", &n, &q);
        int a[n+q+1];
        x = n;
        for (int i = 1; i <= n; scanf("%d", &a[i]), i++);
        printf("Case %d:\n", t++);
        init(1, 1, 2*n);
        while (q--) {
            cin >> ch >> p;
            if (ch[0] == 'c') {
                k = query(1, 1, 2*n, p);
                if (k == -1) printf("none\n");
                else {
                    printf("%d\n", a[k]);
                    update(1, 1, 2*n, k, 0);
                }
            }
            else {
                a[++x] = p;
                update(1, 1, 2*n, x, 1);
            }
        }
    }
}