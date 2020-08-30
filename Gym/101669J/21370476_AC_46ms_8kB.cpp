#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int n, a, a1(0), a2(0), a3(0);
    for (scanf("%d", &n); n--; ) {
		scanf("%d", &a);
		a == 1 ? a1++ : (a == 2) ? a2++ : a3++;
    }
    int x = a1 % 3, y = a2 + a3;
    if (y == 1 || (x && (y == 0 || (y == 2 && a2)))) puts("Win");
    else puts("Lose");
}
