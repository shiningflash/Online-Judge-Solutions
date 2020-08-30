#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int a[mx];

struct info {
	int sum, prop;
} tree[mx*4];

void update(int node, int b, int e, int i, int j, int val) {
	if (i > e || j < b) return;
	if (b >= i && e <= j) {
		tree[node].sum = val * (e-b+1);
		tree[node].prop = val;
		return;
	}
	int left = node << 1, right = left | 1, mid = (b+e) >> 1;
	if (tree[node].prop != -1) {
		tree[left].prop = tree[node].prop;
		tree[right].prop = tree[node].prop;
		tree[left].sum = tree[node].prop * (mid-b+1);
		tree[right].sum = tree[node].prop * (e-mid);
		tree[node].prop = -1;
	}
	update(left, b, mid, i, j, val);
	update(right, mid+1, e, i, j, val);
	tree[node].sum = tree[left].sum + tree[right].sum;
}

int query(int node, int b, int e, int i, int j) {
	if (i > e || j < b) return 0;
	if (b >= i && e <= j) return tree[node].sum;
	int left = node << 1, right = left | 1, mid = (b+e) >> 1;
	if (tree[node].prop != -1) {
		tree[left].prop = tree[node].prop;
		tree[right].prop = tree[node].prop;
		tree[left].sum = tree[node].prop * (mid-b+1);
		tree[right].sum = tree[node].prop * (e-mid);
		tree[node].prop = -1;
	}
	return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}

void init(int n) {
	for (int i = 0; i <= n*4; i++) {
		tree[i].sum = 0;
		tree[i].prop = -1;
	}
}

int main() {
//	freopen("in", "r", stdin);
	int tst, t, n, q, e, f, g, u, v, val;
	scanf("%d", &tst);
	for (int t = 1; t <= tst; t++) {
		scanf("%d %d", &n, &q);
		init(n);
		printf("Case %d:\n", t);
		while (q--) {
			scanf("%d %d %d", &f, &u, &v);
			if (f == 1) {
				scanf("%d", &val);
				update(1, 0, n-1, u, v, val);
			}
			else {
				int ans = query(1, 0, n-1, u, v);
				int cnt = (v - u + 1);
				g = __gcd(ans, cnt);
				if (ans % cnt == 0) printf("%d\n", ans/cnt);
				else printf("%d/%d\n", ans/g, cnt/g);
			}
		}
	}
}