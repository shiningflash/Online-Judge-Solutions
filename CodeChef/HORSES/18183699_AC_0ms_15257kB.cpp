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
#include <limits>
#include <bits/stdc++.h>

#define mem(x, y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 5001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define INT_MX 2147483647

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

////////////////////////////////////////

int main() {
    int t, n;
     //freopen("input.txt", "r", stdin);
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        int a[n+1];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a + n);
        int minx = INT_MAX;
        for (int i =1; i < n; i++)
            minx = min(minx, a[i] - a[i-1]);
        printf("%d\n", minx);
    }
    return 0;
}
