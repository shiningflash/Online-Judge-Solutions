#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define le 100005
 
int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int n, x = 1;
    char s[le];
    scanf("%d %s", &n, s);
    if (n > 26) cout << -1 << "\n";
    else {
        sort(s, s+n);
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) x++;
        }
        cout << (n - x) << "\n";
    }
    return 0;
}