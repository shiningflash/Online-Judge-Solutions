#include <bits/stdc++.h>
using namespace std;

struct node {
	int a, b;
};

bool comp(node x, node y) {
	if (x.b != y.b) return x.b > y.b;
	return x.a < y.a;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, l, r, x;
    cin >> n >> m;
    int a[n+5];
    node nd[n+5];
    map<int, int> m1;
    map<int, int> m2;
    
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    	m1[a[i]]++;
    	if (!m2[a[i]]) m2[a[i]] = i+1;
    }
    for (int i = 0; i < n; i++) {
    	nd[i].a = m2[a[i]];
    	nd[i].b = m1[a[i]];
    }
    sort(nd, nd+n, comp);
    for (int i = 0; i < n; i++) {
    	cout << a[nd[i].a-1] << " ";
    }
}