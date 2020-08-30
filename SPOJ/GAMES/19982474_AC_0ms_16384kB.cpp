#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    char s[10];
    for (scanf("%d", &t); t--; ) {
        scanf("%s", s);
        int n(0), m(1), flag(0);
        for (int i = 0; i < strlen(s); i++) {
            if (flag) m *= 10;
            if (s[i] == '.') flag = 1;
            else n = 10 * n + (s[i] - '0');
        }
        printf("%d\n", m / __gcd(n, m));
    }
}