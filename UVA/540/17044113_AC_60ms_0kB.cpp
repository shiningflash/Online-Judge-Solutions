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

int t, c = 1, n, a, b, i;
string s;

map <int, int> m;
queue <int> q1;

inline void init() {
    m.clear();
    FOR(i, 0, t) {
        scanint(a);
        while (a--)
            scanint(b), m[b] = i;
    }
}

inline void ENQUEUE(queue <int> q2[]) {
    scanint(a);
    b = m[a];
    if (q2[b].empty()) q1.push(b);
    q2[b].push(a);
}

inline void DEQUEUE(queue <int> q2[]) {
    b = q1.front();
    cout << q2[b].front() << "\n";
    q2[b].pop();
    if (q2[b].empty()) q1.pop();
}

inline void execute() {
    q1 = {};
    queue <int> q2[le];
    while (1) {
        cin >> s;
        if (s[0] == 'S') break;
        else if (s[0] == 'E') ENQUEUE(q2);
        else if (s[0] == 'D') DEQUEUE(q2);
    }
    cout << "\n";
}

int main() {
    while (scanint(t) && t > 0) {
        cout << "Scenario #" << c++ << "\n";
        init();
        execute();
    }
    return 0;
}
