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
#define le 5001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef unsigned long long ll;

using namespace std;

/**********************End*******************/

int main() {
    int n, s;
    cin >> n >> s;
    int a[n+1], b[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    if (a[1] == 0) cout << "NO\n";
    else {
        if (a[s] == 1) cout << "YES\n";
        else {
            bool flag = false;
            for (int i = n; i > s; i--) {
                if (a[i] == 1 && b[i] == 1) {
                    if (b[s] == 1) {
                        cout << "YES" << endl;
                        flag = true; break;
                    }
                }
            }
            if (!flag) cout << "NO\n";
        }
    }
}