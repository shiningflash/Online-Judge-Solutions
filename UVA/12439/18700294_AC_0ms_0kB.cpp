#include <bits/stdc++.h>
using namespace std;

int tst, t = 1, d1, d2, yy1, yy2;
char ch, m1[12], m2[12];

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%s %d, %d", m1, &d1, &yy1);
        scanf("%s %d, %d", m2, &d2, &yy2);
        ((m1[0] == 'J' && m1[1] == 'a') || m1[0] == 'F') ? yy1 : yy1++;
        ((m2[0] == 'J' && m2[1] == 'a') || (m2[0] =='F' && d2 < 29)) ? yy2-- : yy2;
        yy1--;
        printf("Case %d: %d\n", t++, ((yy2 / 4) + (yy2 / 400) - (yy2 / 100)) - ((yy1 / 4) + (yy1 / 400) - (yy1 / 100)));
    }
}