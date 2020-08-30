#include <bits/stdc++.h>
using namespace std;
#define pii pair <int, int>
 
int main() {
    //freopen("in", "r", stdin);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            for (int j = 1; j <= n; j++) {
                if (j & 1) cout << "W";
                else cout << "B";
            }
        }
        else {
            for (int j = 1; j <= n; j++) {
                if (j & 1) cout << "B";
                else cout << "W";
            }
        }
        cout << "\n";
    }
    return 0;
}