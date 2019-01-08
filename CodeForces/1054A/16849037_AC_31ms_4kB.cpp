/*************************************
 * @problem CodeForces 1054A - Elevator or Stairs?
 * @author Amirul Islam (id: shiningflash)
 *************************************/

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

int main() {
    int x, y,  z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    int a = t2 * abs(z-x) + (abs(x-y) * t2) + 3 * t3;
    int b = abs(x-y) * t1;
    cout << ((a <= b) ? "YES\n" : "NO\n");
    return 0;
}
