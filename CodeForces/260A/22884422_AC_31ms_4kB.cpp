#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;

int main() {
	int n, a, b, x = -1;
	cin >> a >> b >> n;
	for (int i = 0; i < 10; i++) {
		if ((a * 10 + i) % b == 0) {
			x = i;
			break;
		}
	}
	if (x == -1) cout << -1 << endl;
	else {
		n--;
		cout << (a * 10 + x);
		while (n--) cout << 0;
		cout << endl;
	}
    return 0;
}
