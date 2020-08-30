#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, arr[105], x;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= a; i++) scanf("%d", &x), arr[x] = 1;
    for (int i = 1; i <= b; i++) scanf("%d", &x), arr[x] = 2;
    for (int i = 1; i <= n; i++) printf("%d%s", arr[i], ((i == n) ? "\n" : " "));
}