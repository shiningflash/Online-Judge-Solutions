#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t, i;
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        for (i = 2, m = 1; i <= n; i++) m = (m + n) % i + 1;
        printf("%d\n", m);
    }
}