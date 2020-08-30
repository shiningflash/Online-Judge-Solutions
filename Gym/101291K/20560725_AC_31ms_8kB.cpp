#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int a[6], b[6], win(0), lose(0), eq(0);
    for (int i = 0; i < 6; scanf("%d", &a[i++]));
    for (int i = 0; i < 6; scanf("%d", &b[i++]));
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            ((a[i] > b[j] ? win++ : (a[i] == b[j] ? eq++ : lose++)));
    printf("%.5lf\n", (win/36.0) / (1.0 - (eq/36.0)));
}