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
    string s[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    char dir; cin >> dir;
    string seq; cin >> seq;
    int len = seq.length();
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                if (seq[i] == s[j][k] && dir == 'R') cout << s[j][k-1];
                else if (seq[i] == s[j][k] && dir == 'L') cout << s[j][k+1];
            }
        }
    }
    cout << "\n";
    return 0;
}