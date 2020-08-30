#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <list>
#include <iostream>
#include <assert.h>

#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 50001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define MX 1e9
#define gamma 0.57721566490153286060651209008240243104215933593992 // Euler–Mascheroni constant

#define scanint(a) scanf("%d", &a)
#define scanLLD(a) scanf("%lld", &a)

typedef long long ll;
using namespace std;

/* -------------------------- */

const int N = 100005;
pair<int, int> a[N];
int b[N], c[N];
int t, n;

bool comp(int i, int j) { return a[i] < a[j]; }

void print(bool flg) {
    if (!flg) cout << "-1";
    else
        for (int i = 0; i < n; i++)
            cout << c[i] << " ";
}

void solve() {
    int mx = -999;
    bool flg = false;
    for (int i = 0; i < n-1; i++) {
        mx = max(mx, a[b[i]].second);
        if (mx < a[b[i+1]].first) {
            for (int j = 0; j <= i; c[b[j]] = 1, j++);
            for (int j = i+1; j < n; c[b[j]] = 2, j++);
            flg = true;
            break;
        }
    }
    print(flg);
    cout << "\n";
}

int main() {
    for (scanint(t); t--; ) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        for (int i = 0; i < n; b[i] = i, i++);
        sort(b, b+n, comp);
        solve();
    }
    return 0;
}