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
#define le 100002
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long int ll;

using namespace std;

int main() {
    int n, m, a[1000000], b[1000000], tmp;
    set <int> s;
    CLEAR(b);
    cin >> n >> m;
    for (int i = 0; i < n; scanint(a[i]), i++);
    for (int i = n; i > 0; s.insert(a[i-1]), b[i] = s.size(), i--);
    for (int i = 0; i < m; scanint(tmp), cout << b[tmp] << endl, i++);
    return 0;
}
