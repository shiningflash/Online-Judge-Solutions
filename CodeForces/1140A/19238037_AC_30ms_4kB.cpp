#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = 0, a, dd = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a > mx) mx = a;
        if (mx == i) dd++;
    }
    printf("%d\n", dd);
}