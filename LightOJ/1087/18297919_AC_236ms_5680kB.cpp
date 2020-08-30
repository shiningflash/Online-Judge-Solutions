#include <bits/stdc++.h>
using namespace std;

//typedef long long int ll;
const int mx = 200009;
int tree[4*mx];
int t, tst, n, q;

void init(int node, int b, int e) {
	if (b == e) {
		if (b <= n && e <= n) {
			tree[node] = 1;
			return;
		} else return;
	}
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	init(left, b, mid);
	init(right, mid+1, e);
	tree[node] = tree[left] + tree[right];
	return;
}

int query(int node, int b, int e, int k) {
	if (tree[node] < k) return -1;
	if (b == e) return b;
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	if(tree[left] >= k) return query(left, b, mid, k);
	else return query(right, mid+1, e, k - tree[left]);
}

void update(int node, int b, int e, int i, int val) {
	if (i > e || i < b) return;
	if (b == e) {
		tree[node] = val;
		return;
	}
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	update(left, b, mid, i, val);
	update(right, mid+1, e, i, val);
	tree[node] = tree[left] + tree[right];
}

int main() {
//	freopen("in", "r", stdin);
	scanf("%d", &tst);
	for (int t = 1; t <= tst; t++) {
		memset(tree, 0, sizeof(tree));
		scanf("%d %d", &n, &q);
		int a[n+q+1];
		for (int i = 1; i <= n; scanf("%d", &a[i]), i++);
		init(1, 1, 2*n);
		printf("Case %d:\n", t);
		int x = n, p;
		while (q--) {
			char c[2];
			scanf("%s", c);
			if (c[0] == 'a') {
				scanf("%d", &p);
				a[++x] = p;
				update(1, 1, 2*n, x, 1);
			}
			else {
				scanf("%d", &p);
				int node = query(1, 1, 2*n, p);
				if (node == -1) printf("none\n");
				else {
					printf("%d\n", a[node]);
					update(1, 1, 2*n, node, 0);
				}
			}
		}
	}
	return 0;
}
