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
#define le 10001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long lld;

using namespace std;

/**********************End*******************/

lld i, n, a[1000000];
double m = 0.0, k = 0.0;

int main() {
    scanint(n);
    for (i = 0; i < n; scanint(a[i]), i++);
    _sort(a, n);
    for (i = 0; i < n; i++) {
        if (a[0] == a[i]) k++;
        else if (a[n-1] == a[i]) m++; 
    }
    if (a[n-1] == a[0]) m = n / 2.0, k = n-1;
    lld x = a[n-1] - a[0];
    lld y = m * k;
    cout << x << " " << y << "\n";
    return 0;
}