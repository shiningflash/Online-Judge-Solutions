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
#define MX 1e18

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

/* -------------------------- */

int main() {
    int t, m, n, x;
    for (scanint(t); t--; ) {
        bool flag1 = false;
        vector <int> v1, v2;
        scanf("%d %d", &n, &m);
        int a[n+1];
        fill_n(a, n+1, 0);

        for (int i = 0; i < m; scanint(x), a[x] = -1, i++);
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0 && flag1 == false) {
                v1.pb(i);
                flag1 = true;
            }
            else if (a[i] == 0 && flag1 == true) {
                v2.pb(i);
                flag1 = false;
            }
        }

        int len1 = v1.size(), len2 = v2.size();
//        cout << len1 << " " << len2 << endl;
        for (int i = 0; i < len1; i++)
            cout << ((i == 0) ? "" : " ") << v1[i] << ((i == len1-1) ? "\n" : "");
        for (int i = 0; i < len2; i++)
            cout << ((i == 0) ? "" : " ") << v2[i] << ((i == len2-1 || len2 == 0) ? "\n" : "");
    }
}