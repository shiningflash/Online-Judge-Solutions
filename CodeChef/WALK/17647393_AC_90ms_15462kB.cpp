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
#define MX 1e18

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

/* -------------------------- */

int main() {
    int t, n, ans, tmp, x;
    for (scanint(t); t--; ) {
        scanint(n);
        int seg[n];
        scanint(seg[0]);
        ans = tmp = seg[0];
        for (int i = 1; i < n; i++) {
            scanint(seg[i]);
            tmp--;
            if (tmp < seg[i]) {
                ans += (seg[i] - tmp);
                tmp += (seg[i] - tmp);
            }
        }
        cout << ans << "\n";
    }
}