#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

const double a[] = {1180000, 880000, 480000, 180000};

int main() {  
	// freopen("in", "r", stdin);

	int cas(0), t;
	for (cin >> t; t--; ) {
		double n, m = 0;
		cin >> n;
		if (n > a[0]) m += (n - a[0]) * .25, n = a[0];
		if (n > a[1]) m += (n - a[1]) * .2, n = a[1];
		if (n > a[2]) m += (n - a[2]) * .15, n = a[2];
		if (n > a[3]) m += (n - a[3]) * .1, n = a[3];
		if (m > 0 && m < 2000) m = 2000;
		if (m > (int)m) m++;
		cout << "Case " << ++cas << ": " << (int)m << endl;
	}
    return 0;
} 