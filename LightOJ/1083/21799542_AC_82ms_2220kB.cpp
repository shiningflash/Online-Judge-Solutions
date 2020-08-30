#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, rec[30005], cas(0);
	stack <int> s;
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &rec[i]);
		int i = 0, cur, maxArea = 0, area;
		while (i < n) {
			if (s.empty() || rec[s.top()] <= rec[i]) s.push(i++);
			else {
				cur = s.top(), s.pop();
				area = rec[cur] * (s.empty() ? i : i - s.top() - 1);
				if (maxArea < area) maxArea = area;
			}
		}
		while (!s.empty()) {
			cur = s.top(), s.pop();
			area = rec[cur] * (s.empty() ? i : i - s.top() - 1);
			if (maxArea < area) maxArea = area;
		}
		printf("Case %d: %d\n", ++cas, maxArea);
	}
}