#include <bits/stdc++.h>
using namespace std;

const int mx = 1e3;
int a[mx+5];

void sieve() {
	a[0] = a[1] = 1;
	for (int i = 2; i <= sqrt(mx); i++) {
		if (!a[i]) {
			for (int j = i << 1; j <= mx; j += i) a[j] = 1;
		}
	}
}

int main() {
	sieve();
    int n, m, ans;
    cin >> n >> m;
    for (int i = n + 1; i <= mx; i++) {
    	if (!a[i]) {
    		ans = i;
    		break;
    	}
    }
    if (ans == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
