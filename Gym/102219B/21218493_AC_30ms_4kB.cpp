#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    for (scanf("%d", &n); n--; ) {
        scanf("%d %d", &a, &b);
        printf("%s\n", a==b ? "YES" : "NO");
    }
}
