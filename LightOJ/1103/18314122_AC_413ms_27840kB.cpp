#include <bits/stdc++.h>
using namespace std;

struct edge {
	int a, b, c;
	bool operator < (const edge &p) const {
		return a < p.a;
	}
};

typedef long long int ll;
const int len = 5e6;
const int mx = 1e6;
int tree[len];

int query(int node, int b, int e, int i, int j) {
	if (b > j || e < i || i > j) return 0;
	if (b >= i && e <= j) return tree[node];
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}

void update(int node, int b, int e, int i, int val) {
	if (b > i || e < i) return;
	if (b == e) {
		tree[node]++;
		return;
	}
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	update(left, b, mid, i, val);
	update(right, mid+1, e, i, val);
	tree[node] = tree[left] + tree[right];
}

int main() {
//    freopen("in", "r", stdin);

    int tst, n, m, x, y, z;
    scanf("%d", &tst);

    for (int t = 1; t <= tst; t++) {
		scanf("%d %d", &n, &m);
		vector <edge> v;
		ll cnt(0);
		edge e;

		for (int i = 0; i < n; i++) {
			scanf("%d %d", &e.a, &e.b);
			e.c = 1;
			v.push_back(e);
		}

		for (int i = 0; i < m; i++) {
			scanf("%d %d", &e.a, &e.b);
			e.c = 2;
			v.push_back(e);
		}

		sort(v.begin(), v.end());

		memset(tree, 0, sizeof(tree));
		for (int i = 0; i < v.size(); i++) {
			if (v[i].c == 1)
				cnt += query(1, 1, mx, v[i].b, mx);
			else update(1, 1, mx, v[i].b, 1);
		}

		memset(tree, 0, sizeof(tree));
		for (int i = v.size()-1; i >= 0; i--) {
			if (v[i].c == 1)
				cnt += query(1, 1, mx, 1, v[i].b);
			else update(1, 1, mx, v[i].b, 1);
		}
		printf("Case %d: %lld\n", t, cnt);
    }
}
