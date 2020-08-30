#include <bits/stdc++.h>
using namespace std;

const int le = 1e5+5;
int a[le];
vector <int> v;

int main() {
    //freopen("in.txt", "r", stdin);
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int c = 0, k = i;
        for (int j = 2; j <= i; j++) {
            if (k % j == 0) {
                c++;
                while (k % j == 0) k /= j;
            }
            if (k == 0) break;
        }
        if (c == 2) ans++;
    }
    cout << ans << endl;

    return 0;
}
