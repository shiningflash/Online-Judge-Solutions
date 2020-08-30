#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mx = 1000005;
int tree[3*mx];

void init(int node, int b, int e) {
	if (b == e) {
		tree[node] = 0;
		return;
	}
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	init(left, b, mid);
	init(right, mid+1, e);
	tree[node] = 0;
}

int query(int node, int b, int e, int i) {
	if (i > e || i < b) return 0;
	if (b == i && e == i) return tree[node];
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	if(i <= mid) return tree[node] + query(left, b, mid, i);
	else return tree[node] + query(right, mid+1, e, i);
}

void update(int node, int b, int e, int i, int j) {
	if (i > e || j < b) return;
	if (b >= i && e <= j) { tree[node]++; return; }
	int left = node << 1, right = left | 1, mid = (b + e) >> 1;
	update(left, b, mid, i, j);
	update(right, mid+1, e, i, j);
}

int main() {
//	freopen("in", "r", stdin);

	int t = 1, tst, q;
	char s[mx];
    scanf("%d", &tst);
	getchar();

	while (tst--) {
		printf("Case %d:\n", t++);
		memset(tree, 0, 3*mx);
		scanf("%s", s);
		int n = strlen(s);

		scanf("%d", &q);
		init(1, 1, n);
		while (q--) {
			char c;
			getchar();
			scanf("%c", &c);
			if (c == 'I') {
                int u, v;
				scanf("%d %d", &u, &v);
				update(1, 1, n, u, v);
			}
			else {
                int u;
				scanf("%d", &u);
				int ans = query(1, 1, n, u);
				char ch = s[u-1];
				if (ans % 2 == 1) {
					if (ch == '0') ch = '1';
					else ch = '0';
				}
				printf("%c\n", ch);
			}
		}
	}
}
