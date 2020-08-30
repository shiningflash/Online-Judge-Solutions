#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mx = 200005;
ll a[mx], tree[4*mx];

void init(ll node, ll b, ll e) {
	if (b == e) {
		tree[node] = a[b];
		return;
	}
	ll left = node << 1, right = left | 1, mid = (b + e) >> 1;
	init(left, b, mid);
	init(right, mid+1, e);
	tree[node] = tree[left] + tree[right];
}

ll query(ll node, ll b, ll e, ll i, ll j) {
	if (i > e || j < b) return 0;
	if (b >= i && e <= j) return tree[node];
	ll left = node << 1, right = left | 1, mid = (b + e) >> 1;
	return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}

void update(ll node, ll b, ll e, ll i, ll val) {
	if (i > e || i < b) return;
	if (b >= i && e <= i) {
		tree[node] += val;
		return;
	}
	ll left = node << 1, right = left | 1, mid = (b + e) >> 1;
	update(left, b, mid, i, val);
	update(right, mid+1, e, i, val);
	tree[node] = tree[left] + tree[right];
}

void donate(ll node, ll b, ll e, ll i) {
	if (i > e || i < b) return;
	if (b >= i && e <= i) {
		printf("%lld\n", tree[node]);
		tree[node] = 0;
		return;
	}
	ll left = node << 1, right = left | 1, mid = (b + e) >> 1;
	donate(left, b, mid, i);
	donate(right, mid+1, e, i);
	tree[node] = tree[left] + tree[right];
}

int main() {
//	freopen("in", "r", stdin);
	ll t = 1, tst, n, q, k, u, v;
	string s;
	for (scanf("%lld", &tst); tst--; ) {
		scanf("%lld %lld", &n, &q);
		for (int i = 0; i <= 4*n; tree[i] = 0, i++);
		for (int i = 1; i <= n; scanf("%lld", &a[i]), i++);
		init(1, 1, n);
		printf("Case %d:\n", t++);
		while (q--) {
			scanf("%lld", &k);
			if (k == 1) {
				scanf("%lld", &u);
				donate(1, 1, n, u+1);
			}
			else {
				scanf("%lld %lld", &u, &v);
				if (k == 2) update(1, 1, n, u+1, v);
				else if (k == 3) printf("%lld\n", query(1, 1, n, u+1, v+1));
			}
		}
	}
	return 0;
}
