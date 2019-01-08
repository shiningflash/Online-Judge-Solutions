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

int p[le+1];

inline void primeDIV() {
    CLEAR(p);
    for (int i = 2; i <= le; i++)
        if (p[i] == 0)
            for (int j = 2*i; j <= le; p[j] = 1, j += i);
}

inline void printSOL(int n) {
    if (n <= 2) {
        cout << "1\n";
        for (int i = 1; i <= n; cout << 1 << " ", i++);
    }
    else {
        cout << "2\n";
        for (int i = 2; i <= n+1; i++)
            cout << (p[i] == 0 ? "1" : "2") << " ";
    }
    cout << endl;
}

int main() {
    primeDIV();
    int n;
    scanint(n);
    printSOL(n);
    return 0;
}
