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

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef unsigned long long ll;
using namespace std;

int a[505];

int main() {
    int t, r, n, p, mid;
    scanf("%d", &t);
    while (t--) {
        p = 0;
        scanf("%d", &r);
        for (int i = 0; i < r; scanf("%d", &a[i]), i++);

        _sort(a, r);

        mid = (r-1) / 2;
        for (int i = 0; i < r; i++)
            p += abs(a[i] - a[mid]);

        printf("%d\n", p);
    }
    return 0;
}