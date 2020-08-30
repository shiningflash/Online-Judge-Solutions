#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int tst, t = 1, d1, d2, yy1, yy2;
char ch, m1[20], m2[20];

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%s %d, %d", m1, &d1, &yy1);
        scanf("%s %d, %d", m2, &d2, &yy2);
        ((m1[0] == 'J' && m1[1] == 'a') || m1[0] == 'F') ? yy1 : yy1++;
        ((m2[0] == 'J' && m2[1] == 'a') || (m2[0] =='F' && d2 < 29)) ? yy2-- : yy2;
        yy1--;
        int ans = ((yy2 / 4) + (yy2 / 400) - (yy2 / 100)) - ((yy1 / 4) + (yy1 / 400) - (yy1 / 100));
        printf("Case %d: %d\n", t++, ans);
    }
}
