#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t = 1, n;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        if (n % 3 == 0) printf("%d is a multiple of 3\n", n);
        else printf("%d is not a multiple of 3\n", n);
    }
}