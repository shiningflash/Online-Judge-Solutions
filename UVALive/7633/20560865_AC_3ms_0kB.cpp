#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121}, n;
    while (scanf("%d", &n) && n) {
        bool f = 0;
        for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) if (a[i] == n) puts("Special"), f = 1;
        if (!f) puts("Ordinary");
    }
}