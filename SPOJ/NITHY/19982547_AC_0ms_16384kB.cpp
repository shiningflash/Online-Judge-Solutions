#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        int m(0), r = n%10;
        for (int i(9), j(1); i >= 0; i--, j++) {
            if (r == i && n >= 9*j) m = j;
        }
        if (m) printf("%d\n", m);
        else puts("Impossible");
    }
}