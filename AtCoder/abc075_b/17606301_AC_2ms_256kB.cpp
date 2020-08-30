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
#include <iterator>

#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 1001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

#define FOR(i, a, n) for (int i = a; i < n; i++)
#define ROF(i, a, n) for (int i = a; i <= n; i++)

typedef unsigned long ll;
using namespace std;

int main() {
    int a, b, t = 1;
    cin >> a >> b;
    string str[a];
    for (int i = 0; i < a; cin >> str[i], i++);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (str[i][j] == '#') cout << '#';
            else {
                int n = 0;
                if (i != 0 && i != a-1 && j != 0 && j != b-1) {
                    if (str[i-1][j-1] == '#') n++;
                    if (str[i-1][j] == '#') n++;
                    if (str[i-1][j+1] == '#') n++;
                    if (str[i][j-1] == '#') n++;
                    if (str[i][j+1] == '#') n++;
                    if (str[i+1][j-1] == '#') n++;
                    if (str[i+1][j] == '#') n++;
                    if (str[i+1][j+1] == '#') n++;
                }
                else if (i == 0) {
                    if (j == 0) {
                        if (str[i][j+1] == '#') n++;
                        if (str[i+1][j] == '#') n++;
                        if (str[i+1][j+1] == '#') n++;
                    }
                    else if(j == b-1) {
                        if (str[i][j-1] == '#') n++;
                        if (str[i+1][j] == '#') n++;
                        if (str[i+1][j-1] == '#') n++;
                    }
                    else {
                        if (str[i][j-1] == '#') n++;
                        if (str[i][j+1] == '#') n++;
                        if (str[i+1][j-1] == '#') n++;
                        if (str[i+1][j] == '#') n++;
                        if (str[i+1][j+1] == '#') n++;
                    }
                }
                else if (i == a-1) {
                    if (j == 0) {
                        if (str[i][j+1] == '#') n++;
                        if (str[i-1][j] == '#') n++;
                        if (str[i-1][j+1] == '#') n++;
                    }
                    else if(j == b-1) {
                        if (str[i][j-1] == '#') n++;
                        if (str[i-1][j] == '#') n++;
                        if (str[i-1][j-1] == '#') n++;
                    }
                    else {
                        if (str[i][j-1] == '#') n++;
                        if (str[i][j+1] == '#') n++;
                        if (str[i-1][j-1] == '#') n++;
                        if (str[i-1][j] == '#') n++;
                        if (str[i-1][j+1] == '#') n++;
                    }
                }
                else {
                    if (j == 0) {
                        if (str[i-1][j] == '#') n++;
                        if (str[i-1][j+1] == '#') n++;
                        if (str[i][j+1] == '#') n++;
                        if (str[i+1][j] == '#') n++;
                        if (str[i+1][j+1] == '#') n++;
                    }
                    else if (j == b-1) {
                        if (str[i-1][j] == '#') n++;
                        if (str[i-1][j-1] == '#') n++;
                        if (str[i][j-1] == '#') n++;
                        if (str[i+1][j] == '#') n++;
                        if (str[i+1][j-1] == '#') n++;
                    }
                }
                cout << n;
            }
        }
        cout << endl;
    }
}