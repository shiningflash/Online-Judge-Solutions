#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

bool a[mx];

void sieve() {
    a[1] = 1;
    for (int i = 4; i <= mx; i += 2) a[i] = 1;
    for (int i = 3; i <= sqrt(mx); i += 2) {
        if (a[i] == 0) for (int j = i*i; j <= mx; j += i) a[j] = 1;
    }
}

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    sieve();
    int n, i(4);
    for (cin >> n; i < n; i++) {
        if (a[i] && a[n-i]) break;
    }
    cout << i << " " << (n - i) << "\n";
    return 0;
}