/*************************************************
 * @problem  Grid Challange
 * @author     Amirul Islam (user id: shiningflash)
 *************************************************/

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
#define le 46340
#define sz 4792
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long lld;

using namespace std;

/**********************End*******************/

int t, n;
string *grid;

inline void gridChallange() {
    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (grid[j][i] > grid[j+1][i]) { flag = false; break; }
        }
    }
    (flag) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    scanint(t);
    while (t--) {
        scanint(n);
        grid = new string[n];
        for (int i = 0; i < n; cin >> grid[i], Sort(grid[i]), i++);
        gridChallange();
    }
}
