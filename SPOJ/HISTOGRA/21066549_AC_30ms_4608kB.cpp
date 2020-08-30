#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005], tst, cas(0), n;

void histogram() {
	ll mx = 0;
	a[n+1] = 0;
	stack <ll> s;
	s.push(0);
	for (int i = 1; i <= n+1; i++) {
		while (a[i] < a[s.top()]) {
			int top = s.top();
			s.pop();
			mx = max(mx, a[top] * (i - s.top() - 1));
		}
		s.push(i);
	}
	printf("%lld\n", mx);
}

int main() {
	while (scanf("%lld", &n) && n) {
		for (ll i = 1; i <= n; scanf("%lld", &a[i++]));
		histogram();
	}
}