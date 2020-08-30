#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {
    //freopen("in", "r", stdin);
    
    int n, a[mx+5], m = INT_MIN, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > m) m = a[i], x = i;
    }
    for (int i = x; i > 0; i--) {
        if (a[i] <= a[i-1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (int i = x; i < n-1; i++) {
        if (a[i] <= a[i+1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}