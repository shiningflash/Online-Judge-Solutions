/*********************************************
 * Bytelandian gold coins SPOJ - COINS 
 * @author Amirul Islam (shiningflash)
 * solved by DP (dynamic programming)
 *********************************************/

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
#define le 1000000000
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;

using namespace std;

/**********************End*******************/

map <int, ll> m;

ll coin(int n) {
    if (n == 0) return 0;
    if (m[n] != 0) return m[n];
    ll tmp = coin(n/2) + coin(n/3) + coin(n/4);
    m[n] = (tmp > n ? tmp : n);
    return m[n];
}

int main() {
    int n;
    while (scanint(n) != EOF)
        printf("%lld\n", coin(n));
    return 0;
}
