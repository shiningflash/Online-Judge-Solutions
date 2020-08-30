#include <bits/stdc++.h>
using namespace std;

const int mx = 100005;

int n, arr[mx], tree[mx*4], mm[mx*4], nn[mx*4];

void init(int node, int b, int e) {
    if (b == e) tree[node] = arr[b], mm[node] = arr[b], nn[node] = arr[b];
    else {
        int left = node << 1, right = left | 1, mid = (b+e) >> 1;
        init(left, b, mid);
        init(right, mid+1, e);
        tree[node] = tree[left] + tree[right];
        mm[node] = max(mm[left], mm[right]);
        nn[node] = min(nn[left], nn[right]);
    }
}

int query_sum(int node, int b, int e, int i, int j) {
    if (i > j) return 0;
    if (i == b && j == e) return tree[node];
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    return query_sum(left, b, mid, i, min(mid, j)) + query_sum(right, mid+1, e, max(mid+1, i), j);
}

int query_max(int node, int b, int e, int i, int j) {
    if (i > j) return -mx;
    if (i == b && j == e) return mm[node];
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    return max(query_max(left, b, mid, i, min(mid, j)), query_max(right, mid+1, e, max(mid+1, i), j));
}

int query_min(int node, int b, int e, int i, int j) {
    if (i > j) return mx;
    if (i == b && j == e) return nn[node];
    int left = node << 1, right = left | 1, mid = (b+e) >> 1;
    return min(query_min(left, b, mid, i, min(mid, j)), query_min(right, mid+1, e, max(mid+1, i), j));
}

void update(int node, int b, int e, int i, int val) {
    if (b == e) tree[node] = val, mm[node] = val, nn[node] = val;
    else {
        int left = node << 1, right = left | 1, mid = (b+e) >> 1;
        if (i <= mid) update(left, b, mid, i, val);
        else update(right, mid+1, e, i, val);
        tree[node] = tree[left] + tree[right];
        mm[node] = max(mm[left], mm[right]);
        nn[node] = min(nn[left], nn[right]);
    }
}

int main() {
	//freopen("in", "r", stdin);
	int n, q, i, j, ans, z;
	for (int i = 0; i < mx*4; i++) tree[i] = 0, mm[i] = -mx, nn[i] = mx;
	scanf("%d %d", &n, &q);
	for (int k = 1; k <= n; scanf("%d", &arr[k]), k++);
	init(1, 1, n);
	while (q--) {
		scanf("%d %d %d", &z, &i, &j);
		if (z == 1) printf("%d\n", query_sum(1, 1, n, i, j) - query_max(1, 1, n, i, j) - query_min(1, 1, n, i, j));
		else update(1, 1, n, i, j);
	}
	return 0;
}
