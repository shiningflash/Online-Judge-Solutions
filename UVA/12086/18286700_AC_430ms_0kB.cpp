#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mx = 200005;
ll a[mx], tree[4*mx];

void init(int node, int b, int e) {
	if (b == e) {
		tree[node] = a[b];
		return;
	}
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	init(left, b, mid);
	init(right, mid+1, e);
	tree[node] = tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j) {
	if (i > e || j < b) return 0;
	if (b >= i && e <= j) return tree[node];
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}

void update(int node, int b, int e, int i, int val) {
	if (i > e || i < b) return;
	if (b >= i && e <= i) {
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
	ll t = 1, n, u, v;
	string s;
	while (scanf("%lld", &n) && n) {
		for (int i = 0; i <= 4*n; tree[i] = 0, i++);
		for (int i = 1; i <= n; scanf("%lld", &a[i]), i++);
		init(1, 1, n);
		if (t != 1) printf("\n");
		printf("Case %d:\n", t++);
		while (cin >> s && (s != "END")) {
			scanf("%d %d", &u, &v);
			if (s == "M") printf("%lld\n", query(1, 1, n, u, v));
			else if (s == "S") update(1, 1, n, u, v);
		}
	}
	return 0;
}
