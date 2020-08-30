#include <bits/stdc++.h>
using namespace std;

const int mx = 2e5;

int main() {
	int a, b, c, sum = 0;
	cin >> a >> b >> c;
	for (int i = 1; i <= a; i++) {
		if (i << 1 > b) break;
		if (i << 2 > c) break;
		sum += 7;
	}
	cout << sum << endl;
    return 0;
}
