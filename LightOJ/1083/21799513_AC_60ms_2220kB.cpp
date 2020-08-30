#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, rec[30005], cas(0);
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%d", &rec[i]);
		rec[n+1] = rec[0] = 0;
		int maxArea = 0, area;
		stack <int> s;
		s.push(0);
		for (int i = 1; i <= n+1; i++) {
			while (rec[i] < rec[s.top()]) {
				int cur = s.top();
				s.pop();
				area = rec[cur] * (i - s.top() - 1);
				if (maxArea < area) maxArea = area;
			}
			s.push(i);
		}
		printf("Case %d: %d\n", ++cas, maxArea);
	}
}