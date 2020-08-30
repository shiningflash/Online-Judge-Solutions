/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
 
const int len = 300;
const int Mod = 1e9+7;
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t, n;
    cin >> t;
    while (t--) {
        int a[len], b[len], c[len], d[len];
        memset(c, 0, sizeof(c));
        cin >> n;
        int cnt(0), k(0), x;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) {
            int j = i, cnt = 0;
            while (1) {
                j = a[j];
                cnt++;
                if (j == i) {
                    c[i] = cnt;
                    break;
                }
            }
        }
        for (int i = 1; i < n; i++) cout << c[i] << " ";
        cout << c[n] << endl;
    }
 
    return 0;
}