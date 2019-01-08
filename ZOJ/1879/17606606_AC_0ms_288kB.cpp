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
    int n;
    while (scanf("%d", &n) == 1) {
        int a[n+2], dif[n+2];
        for (int i = 0; i < n; scanf("%d", &a[i]), i++);
        mem(dif, 0);
        for (int i = 0; i < n-1; i++) {
            int x = abs(a[i] - a[i+1]);
            if (x < n) dif[x] = 1;
        }
        bool flg = false;
        for (int i = 1; i < n; i++) {
            if (dif[i] == 0) {
                flg = true;
                break; }
        }
        if (flg == true) printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}