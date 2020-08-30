#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
	LLI x, n, m, t(0);
	for (cin >> x; x--; ) {
		cin >> n >> m;
		cout << "Case " << ++t << ": " << (n * m) / 2 << endl;
	}
	return 0;
}