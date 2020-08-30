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
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0, len = s1.length();
        for (int i = 0; i < s2.size(); i++) {
            if (i+1-len >= 0 && s2.substr(i+1-len, len) == s1) {
                cnt++;
                s2.erase(i+1-len, len);
                i -= len;
            }
        }
        cout << cnt << "\n";
    }
}