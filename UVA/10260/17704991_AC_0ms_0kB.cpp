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
#include <unordered_set>

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
#define MX 1e9

#define scanint(a) scanf("%d", &a)
#define scanLLD(a) scanf("%lld", &a)

typedef long long ll;
using namespace std;

/* -------------------------- */

char code[] = "01230120022455012623010202";

int main() {
    string s;
    while (cin >> s && s != "\n") {
        int len = s.length();
        for (int i = 0; i < len; i++) {
            int x = s[i-1] - 'A';
            int y = s[i] - 'A';
            if (code[y] != '0') {
                if (i == 0) cout << code[y];
                else
                    if (code[x] != code[y]) cout << code[y];
            }
        }
        cout << "\n";
    }
}