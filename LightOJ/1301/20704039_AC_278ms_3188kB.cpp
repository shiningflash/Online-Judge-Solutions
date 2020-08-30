#include <bits/stdc++.h>
using namespace std;

int main() {
	int tst, t(0), n, a, b;
	for (scanf("%d", &tst); tst--; ) {
		vector <pair<int, int> > v;
		priority_queue <int, vector<int>, greater <int> > q;
		for (scanf("%d", &n); n--; ) scanf("%d %d", &a, &b), v.push_back({a, b});
		sort(v.begin(), v.end());
		for (auto i : v) {
			q.push(i.second);
			if (i.first > q.top()) q.pop();
		}
		printf("Case %d: %d\n", ++t, q.size());
		v.clear();
		while (!q.empty()) q.pop();
	}
}