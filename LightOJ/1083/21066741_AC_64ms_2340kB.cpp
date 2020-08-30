#include <bits/stdc++.h>
using namespace std;

int a[30005], tst, cas(0), n;

void histogram() {
	int mx = 0;
	a[n+1] = 0;
	stack <int> s;
	s.push(0);
	for (int i = 1; i <= n+1; i++) {
		while (a[i] < a[s.top()]) {
			int top = s.top();
			s.pop();
			mx = max(mx, a[top] * (i - s.top() - 1));
		}
		s.push(i);
	}
	printf("Case %d: %d\n", ++cas, mx);
}

int main() {
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d", &n);
		for (int i = 1; i <= n; scanf("%d", &a[i++]));
		histogram();
	}
}