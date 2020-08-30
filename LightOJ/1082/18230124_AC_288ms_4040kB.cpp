/**************************************
 * author - Amirul Islam (shiningflash)
 --------------------------------------
 * Segment tree (data structure)
 * total complexity - O(n log n)
 **************************************/

#include <bits/stdc++.h>
using namespace std;

const int mx = 100007;

/******* param ***********
 * arr[]  - main array
 * tree[] - conceptual tree
 * b      - begin index
 * e      - end index
 * node   - root node index
 * ls     - left part sum
 * rs     - right part sum
 *************************/

int arr[mx];
int tree[mx*4];

int minimum(int a, int b) {
	return (a > b) ? b : a;
}

void init(int node, int b, int e) {
	if (b == e) {
		tree[node] = arr[b];
		return;
	}
	int left = node << 1;
	int right = (node << 1) + 1;
	int mid = (b + e) >> 1;
	init(left, b, mid);
	init(right, mid + 1, e);
	tree[node] = minimum(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j) {
	if (i > e || j < b) return mx;
	if (b >= i && e <= j) return tree[node];
	int left = node << 1;
	int right = (node << 1) + 1;
	int mid = (b + e) >> 1;
	int ls = query(left, b, mid, i, j);
	int rs = query(right, mid + 1, e, i, j);
	return minimum(ls, rs);
}

int main() {
//	freopen("in", "r", stdin);

	int tst, n, q, i, j, ans;
	scanf("%d", &tst);
	for (int t = 1; t <= tst; t++) {
		scanf("%d %d", &n, &q);
		for (int k = 1; k <= n; scanf("%d", &arr[k]), k++);
		printf("Case %d:\n", t);
		init(1, 1, n);
		while (q--) {
			scanf("%d %d", &i, &j);
			ans = query(1, 1, n, i, j);
			printf("%d\n", ans);
		}
	}
	return 0;
}
