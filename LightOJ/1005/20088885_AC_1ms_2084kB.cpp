#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, t(0), tst;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &k);
        unsigned long long int m(1), i(1);
        if (k > n) m = 0;
        else {
            while (i <= k) {
                m = m * n * n / i;
                i++; n--;
            }
        } 
        printf("Case %d: %llu\n", ++t, m);
    }
    return 0;
}