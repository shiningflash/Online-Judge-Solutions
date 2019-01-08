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

#define FOR(i, a, n) for (int i = a; i < n; i++)
#define ROF(i, a, n) for (int i = a; i <= n; i++)

typedef unsigned long ll;
using namespace std;

deque <int> q;
int n, a, b;

int main() {
    while (scanint(n) && n != 0) {
        q = {};
        a = n;
        for (int i = 1; i <= n; q.pb(i), i++);
        cout << "Discarded cards:";
        if (n <= 1) cout << "\n";
        else {
            while (a > 1) {
                cout << " " << q.f() << (a <= 2 ? "\n" : ",");
                q.ppf();
                b = q.f();
                q.ppf();
                q.pb(b);
                a--;
            }
        }
        cout << "Remaining card: " << (n > 0 ? q.f() : 0) << endl;
    }
}
