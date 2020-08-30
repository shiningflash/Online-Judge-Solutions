#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll tst, t(0), n, x, y;
    set <ll> s;
    set <ll> :: iterator it;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &x, &y);
        printf("Case %d:", ++t);
        if (x == y) { puts(" 0"); continue; }
        else {
            x = x - y;
            for (int i = 1; i <= sqrt(x); i++) {
                if (x % i == 0) {
                    if (x / i == i && i > y) s.insert(i);
                    else {
                        if (i > y) s.insert(i);
                        if (x / i > y) s.insert(x / i);
                    }
                }
            }
        }
        if (s.size() == 0) printf(" impossible");
        else for (it = s.begin(); it != s.end(); it++) cout << " " << *it;
        puts("");
        s.clear();
    }
}