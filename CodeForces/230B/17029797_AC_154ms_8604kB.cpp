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

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

/**Define constant value**/
#define le 1000000
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long int ll;

using namespace std;

int q[le], p[le], k = 0;

inline void sieve() {
    CLEAR(q); q[0] = 1; q[1] = 1;
    for (int i = 4; i <= le; q[i] = 1, i += 2);
    p[k++] = 2;
    for (int i = 3; i <= le; i += 2) {
        if (q[i] == 0) {
            p[k++] = i;
            if (i <= sqrt(le)) {
                for (int j = sqr(i); j <= le; q[j] = 1, j += (i*2));
            }
        }
    }
}

inline void checkTPrime(ll x) {
    ll rt = sqrt(x);
    if (x == sqr(rt) && q[rt] == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    sieve();
    int n; scanint(n);
    ll a[n+1];
    for (int i = 0; i < n; scanLLD(a[i]), i++);
    for (int i = 0; i < n; i++) checkTPrime(a[i]);
    return 0;
}
