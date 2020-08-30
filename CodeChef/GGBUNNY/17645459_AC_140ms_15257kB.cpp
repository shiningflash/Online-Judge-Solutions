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

vector <ll> v;

int main() {
    int t;
    scanint(t);
    while (t--) {
        ll n, k, p = 1, cnt = 0;
        cin >> n >> k;

        v.clear(); v.pb(1);
        while(1) {
            if (p > MX || p < 0) break;
            else {
                p = p * k;
                v.pb(p);
            }
        }

        while (n--) {
            cin >> p;
            if (binary_search(v.begin(), v.end(), p)) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}