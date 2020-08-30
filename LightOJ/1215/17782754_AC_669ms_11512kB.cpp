/******************************
 * Finding LCM LightOJ - 1215
 * @author Amirul islam
 *                  _
 *  _|_ o._ o._  __|_| _. _|_
 * _>| ||| ||| |(_|| |(_|_>| |
 *               _|
 ******************************/

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

#define le 1000009
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

#define scanint(a) scanf("%d", &a)
#define scanLLD(a) scanf("%lld", &a)

typedef long long ll;
using namespace std;

/**********************End*******************/

ll n[1000009], len;
vector <ll> primes;

void sieve() {
    CLEAR(n);
    for (ll i = 2; i <= 1000006; i++) {
        if (n[i] == 0) {
            primes.pb(i);
            for (ll j = i*i; j <= 1000006; j += i) {
                n[j] = 1;
            }
        }
    }
}

void solve(ll i, ll a, ll b, ll l) {
    ll c = 1;
    for (ll j = 0; j < len; j++) {
        ll x = 0, y = 0, z = 0;
        while (a % primes[j] == 0) a /= primes[j], x++;
        while (b % primes[j] == 0) b /= primes[j], y++;
        while (l % primes[j] == 0) l /= primes[j], z++;

        if (z > max(x, y))
            while (z--) c *= primes[j];
    }
    printf("Case %lld: %lld\n", i, c*l);
}

int main() {
    sieve();
    ll a, b, l;
    len = primes.size();

    ll t; cin >> t;
    for (ll i = 1; i <= t; i++) {
        cin >> a >> b >> l;
        if ((l % a) || (l % b)) printf("Case %lld: impossible\n", i);
        else solve(i, a, b, l);
    }
    return 0;
}