// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e6+5;
const double pi = acos(-1.0);

int a[mx], b[mx];

struct team {
    int p, q, r;
    bool operator < (const team &n) const {
        return r > n.r;
    }
};

team t[mx];

int main() {
    // freopen("in", "r", stdin);
    
    int n, m = 0;
    cin >> n;
    for (int i = 1; i <= 2*n; i++) {
        for (int j = 1; j < i; j++) {
            m++;
            t[m].p = i;
            t[m].q = j;
            cin >> t[m].r;
        }
    }
    sort(t+1, t+m+1);
    for (int i = 1; i <= m; i++) {
        int x = t[i].p;
        int y = t[i].q;
        if (!a[x] && !a[y]) a[x] = y, a[y] = x;
    }
    cout << a[1];
    for (int i = 2; i <= 2*n; i++) cout << " " << a[i];
    cout << "\n";
}
