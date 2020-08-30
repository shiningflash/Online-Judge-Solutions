#include <bits/stdc++.h>
using namespace std;
 
int main() {
	map<int, int> m;
	deque <int> d;
	int n, q, x, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (m[x]) continue;
		if (d.size() == k) {
			m[d.back()]--;
			d.pop_back();
		}
		d.push_front(x);
		m[x]++;
	}
	cout << d.size() << "\n";
	while (!d.empty()) cout << d.front() << " ", d.pop_front();
	return 0;
}