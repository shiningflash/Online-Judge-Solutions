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
#include <deque>
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

#define f front
#define pf push_front
#define pb push_back
#define ppf pop_front
#define ppb pop_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 1001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)
#define scanint2(a, b) scanf("%d %d", &a, &b)

#define FOR(i, a, n) for (int i = a; i < n; i++)
#define ROF(i, a, n) for (int i = a; i <= n; i++)

typedef unsigned long ll;
using namespace std;

deque <int> q;
int p, n, a, b, cs = 1;
char c;

int main() {
    while (scanint2(p, n) && (p != 0 && n != 0)) {
        q = {};
        a = min(p, n);
        for (int i = 1; i <= a; q.pb(i), i++);
        cout << "Case " << cs++ << ":\n";
        while (n--) {
            cin >> c;
            if (c == 'N') { cout << q.f() << endl; q.pb(q.f()); q.ppf(); }
            else if (c == 'E') {
                scanint(b);
                for  (deque<int>::iterator i = q.begin(); i != q.end(); i++)
                    if (*i == b) { q.erase(i); break; }
                q.pf(b);
            }
        }
    }
    return 0;
}
