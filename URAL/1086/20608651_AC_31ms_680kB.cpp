#include <bits/stdc++.h>
using namespace std;
#define mx 200000

int t, n, ind(1), p[mx];
bool a[mx] = {0};

void prime() {
    p[1] = 2;
    for (int i = 3; ind <= 15000; i += 2) {
        if (!a[i]) {
            p[++ind] = i;
            for (int j = 2*i; j < mx; a[j] = 1, j += i);
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    prime();
    for (scanf("%d", &t); t--; ) scanf("%d", &n), printf("%d\n", p[n]);
}