// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
#define MP make_pair
#define FILEREAD() freopen("in", "r", stdin);
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl;
 
const int _mx = 1e6+5;
 
void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int a[_mx], tree[3*_mx];

void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = min(tree[left], tree[right]);
}

void update(int node, int b, int e, int pos, int val) {
    if (b > pos || e < pos) return;
    if (b == e) {
        tree[node] = val;
        return;
    }
    int left = node << 1;
    int right =  left | 1;
    int mid = (b + e) >> 1;
    update(left, b, mid, pos, val);
    update(right, mid+1, e, pos, val);
    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j) {
    if (i > e || j < b) return INT_MAX;
    if (b >= i && e <= j) return tree[node];
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    return min(query(left, b, mid, i, j), query(right, mid+1, e, i, j));
}

void solve() {
    int n, q, u, v;
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    init(1, 1, n);
    while (q--) {
        scanf("%d %d", &u, &v);
        int ans = query(1, 1, n, u, v);
        printf("%d\n", ans);
    }
}

int main() {
    //FILEREAD();
    //FASTIO();

    int q, co(0);
    for (scanf("%d\n", &q); q--; ) printf("Case %d:\n", ++co), solve();
    return 0;
}