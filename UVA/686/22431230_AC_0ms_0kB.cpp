/*
    Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>

const int len = 1e5+5;
const int Mod = 1e9+7;
const int mx = 1<<15;

bool a[mx];

void sieve() {
    a[0] = a[1] = 1;
    for (int i = 2; i <= mx; i++) {
        if (a[i] == 0) {
            for (int j = 2*i; j <= mx; j += i) a[j] = 1;
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int n;
    sieve();
    while (cin >> n && n) {
    	int cnt = 0;
    	for (int i = 2; i <= (n/2); i++) {
    		if (!(a[i] + a[n-i])) cnt++;
    	}
    	cout << cnt << endl;
    }
    return 0;
}