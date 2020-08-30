#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t = 1, n, d;
    string s;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        printf("Case %d:\n", t++);
        long long int rr = 0;
        while (n--) {
            cin >> s;
            if (s[0] == 'd') {
                scanf("%d", &d);
                rr += d;
            }
            else
                printf("%lld\n", rr);
        }
    }
}