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

int main() {
    int x, y, m, n, t;
    while (scanf("%d", &t) == 1 && t != 0) {
        scanf("%d %d", &m, &n);
        while (t--) {
            scanf("%d %d", &x, &y);
            if (x == m || y == n) printf("divisa\n");
            else if (x > m && y > n) printf("NE\n");
            else if (x < m && y < n) printf("SO\n");
            else if (x > m && y < n) printf("SE\n");
            else printf("NO\n");
        }
    }
    return 0;
}