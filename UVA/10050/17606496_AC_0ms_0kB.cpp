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

typedef unsigned long ll;
using namespace std;
int main() {
    int t, n, party, h;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        scanf("%d", &party);
        int flg[n+5];
        mem(flg, 0);
        while (party--) {
            scanf("%d", &h);
            for (int i = h; i <= n; i += h)
                flg[i] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i += 7)
            for (int j = 0; j < 5; j++)
                cnt += flg[i+j];
        printf("%d\n", cnt);
    }
}