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

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef unsigned long long ll;

using namespace std;

int main() {
    string s1, s2;
    int l1, l2;
    while (getline(cin, s1) && getline(cin, s2)) {
        l1 = s1.length(); l2 = s2.length();
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        string ans = "";
        int i = 0, j = 0;
        while (i != l1 && j != l2) {
            if (s1[i] == s2[j]) {
                ans += s1[i];
                i++; j++;
            }
            else if (s1[i] > s2[j]) j++;
            else i++;
        }
        cout << ans << endl;
    }
}