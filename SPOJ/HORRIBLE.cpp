/**************************************
 * author - Amirul Islam (shiningflash)
 --------------------------------------
 * Segment tree "Lazy Propagation"
 * update a range, get sum of a range
 --------------------------------------
 * height (total) - log(n)
 * per query - O(log n)
 * range update - O(log n)
 * total complexity - O(n log n)
 **************************************/

#include <bits/stdc++.h>
using namespace std;
#define mx 100005
#define ll long long int

/******* param ***********
 * arr[]  - main array
 * tree[] - conceptual tree
 * b      - begin index
 * e      - end index
 * node   - root node index
 * ls     - left part sum
 * rs     - right part sum
 * val    - new value to add
 * prop   - propagate value
 * carry  - carrying propagate value
 *************************/

ll arr[mx];

struct info {
	ll sum, prop;
} tree[mx * 4];

ll query(ll node, ll b, ll e, ll i, ll j, ll carry = 0) {
	if (i > e || j < b) return 0;
	if (b >= i && e <= j) return tree[node].sum + carry * (e - b + 1);
	ll left = node << 1;
	ll right = left | 1;
	ll mid = (b + e) >> 1;
	ll ls = query(left, b, mid, i, j, carry + tree[node].prop);
	ll rs = query(right, mid + 1, e, i, j, carry + tree[node].prop);
	return ls + rs;
}

void update(ll node, ll b, ll e, ll i, ll j, ll val) {
	if (i > e || j < b) return;
	if (b >= i && e <= j) {
		tree[node].sum += ((e - b + 1) * val);
		tree[node].prop += val;
		return;
	}
	ll left = node << 1;
	ll right = left | 1;
	ll mid = (b + e) >> 1;
	update(left, b, mid, i, j, val);
	update(right, mid + 1, e, i, j, val);
	tree[node].sum = tree[left].sum + tree[right].sum + (e - b + 1) * tree[node].prop;
}

int main() {
//	 freopen("in", "r", stdin);

	ll t, tst, n, q, k, val;
	scanf("%lld", &tst);
	for (ll t = 1; t <= tst; t++) {
		scanf("%lld %lld", &n, &q);
		memset(tree, 0, sizeof(tree));
		while (q--) {
			ll ii, jj;
			scanf("%lld %lld %lld", &k, &ii, &jj);
			if (k == 0) {
				scanf("%lld", &val);
				update(1, 1, n, ii, jj, val);
			}
			else if (k == 1) printf("%lld\n", query(1, 1, n, ii, jj, 0));
		}
	}
}
