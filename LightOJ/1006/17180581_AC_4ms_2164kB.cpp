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
#include <iterator>

#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 1001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

#define FOR(i, a, n) for (int i = a; i < n; i++)
#define ROF(i, a, n) for (int i = a; i <= n; i++)

typedef long long int ll;
using namespace std;

ll a, b, c, d, e, f, n, arr[10010];

ll fn(long long int n) {
	int i = 0;
    for ( ; i <= n; i++) {
        if( i == 0 ) { arr[i] = a; continue; }
        if( i == 1 ) { arr[i] = b; continue; }
        if( i == 2 ) { arr[i] = c; continue; }
        if( i == 3 ) { arr[i] = d; continue; }
        if( i == 4 ) { arr[i] = e; continue; }
        if( i == 5 ) { arr[i] = f; continue; }

        arr[i] = ((arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6]) % 10000007);
    }
    return arr[n];
}
int main() {
    ll i = 1, n, cases;
    scanf("%lld", &cases);
    for ( ; i <= cases; i++) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", i, fn(n) % 10000007);
    }
    return 0;
}