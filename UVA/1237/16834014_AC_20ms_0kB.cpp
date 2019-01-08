/*************************************
 * @problem UVA - 1237 - Expert Enough?
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

int t, n, k, p, low[le], company, high[le];
string *brand;

int check(int p) {
    company = -1;
    for (int i = 0; i < n; i++) {
        if (p >= low[i] && p <= high[i]) {
            if (company >= 0) { company = -2; break; }
            else company = i;
        }
    }
    return company;
} 

void findMaker() {
    scanint(k);
    while(k--) {
        scanint(p);
        company = check(p);
        cout << ((company < 0) ? "UNDETERMINED" : brand[company]) << endl;
    }
}

int main() {
    for (scanint(t); t--; ) {
        scanint(n);
        brand = new string[n];
        for (int i = 0; i < n; i++)
            cin >> brand[i] >> low[i] >> high[i];
        findMaker();
        if (t) cout << endl;
    }
    return 0;
}