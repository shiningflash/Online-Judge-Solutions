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

inline int countTIME(queue <int> q, int L) {
    int cnt = 0;
    while (!q.empty()) {
        int sum = 0;
        while (1) {
            sum += q.front();
            if (sum > L) break;
            q.pop();
            if (q.empty()) break;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    int t, L, m, len;
    string dir;
    for (scanint(t); t--; ) {
        cin >> L >> m;
        L *= 100;
        queue <int> ql, qr;
        while (m--) {
            cin >> len >> dir;
            if (dir[0] == 'l') ql.push(len);
            else qr.push(len);
        }
        int cntLEFT = countTIME(ql, L);
        int cntRIGHT = countTIME(qr, L);
        cout << (cntLEFT <= cntRIGHT ? (cntRIGHT*2) : (cntLEFT*2-1)) << endl;
    }
    return 0;
}
