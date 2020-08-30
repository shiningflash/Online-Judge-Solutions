#include <bits/stdc++.h>
using namespace std;

bool reversedigit(int x) {
    if (x < 0 || (x && !(x % 10))) return false;
    int n(0);
    while (x > n) n = (n * 10) + (x % 10), x /= 10;
    return (n == x || n/10 == x);
}

int main() {
    int x;
    while (~scanf("%d", &x)) printf("%s\n", reversedigit(x) ? "Yes" : "No");
}
