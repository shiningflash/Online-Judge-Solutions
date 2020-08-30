#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

int main() {  
	// freopen("in", "r", stdin);

	int n, x, y, sumX = 0, sumY = 0, maxX = 0, maxY = 0, l = 0, r = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		sumX += x;
		sumY += y;
		if (x > y) {
			if (x-y > maxX) maxX = x-y, l = i;
		}
		else {
			if (y - x > maxY) maxY = y-x, r = i;
		}
	}
	int a = abs(sumX - sumY);
	int b = abs((sumX - maxX) - (sumY + maxX));
	int c = abs((sumX + maxY) - (sumY - maxY));
	if (a >= b && a >= c) cout << 0 << endl;
	else if (b > a && b >= c) cout << l << endl;
	else cout << r << endl;

	return 0;
} 