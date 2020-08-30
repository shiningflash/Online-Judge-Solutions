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

int i, t, n;
double a[100002];

int main() {
    a[0] = 0;
    for (i = 1; i <= 100000; i++)
        a[i] = a[i-1] + 1.0 / i;

    scanint(t);
    for (i = 1; i <= t; i++) {
        scanint(n);
        if (n <= 100000) printf("Case %d: %.10f\n", i, a[n]);
        else printf("Case %d: %.10f\n", i, gamma + log(n) + (1.0 / (2*n)));
    }
    return 0;
}