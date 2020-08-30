#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    bool a[n][n];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
        if (!(i & 1)) {
            for (int j = 0; j < n; j += 2) if (k > 0) a[i][j] = 1, k--;
        }
        else {
            for (int j = 1; j < n; j += 2) if (k > 0) a[i][j] = 1, k--; 
        }
    }
    if (k > 0) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << (char) (a[i][j] ? 'L' : 'S');
        cout << "\n";
    }  
    return 0;
}