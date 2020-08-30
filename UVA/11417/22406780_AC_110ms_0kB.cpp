#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1000005;

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n;
    while (cin >> n && n) {
        ll sum = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i+1; j <= n; j++) {
                sum += __gcd(i, j);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
