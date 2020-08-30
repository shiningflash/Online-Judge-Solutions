#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
	LLI cas(0), t, n, x, y;
	for (cin >> t; t--; ) {
		cin >> n;
		int rt = sqrt(n);
		int d = n - rt * rt;
		
		if (d == 0) {
			if (rt & 1) x = 1, y = rt;
			else x = rt, y = 1;
		}
		else if (d <= rt) {
			if (rt & 1) x = d, y = rt + 1;
			else x = rt + 1, y = d;
		}
		else {
			int tmp = d - rt - 1;
			if (rt & 1) x = rt + 1, y = rt + 1 - tmp;
			else x = rt + 1 - tmp, y = rt + 1;
		}
		cout << "Case " << ++cas << ": " << x << " " << y << endl;
	}
}