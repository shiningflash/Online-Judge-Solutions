#include <bits/stdc++.h>
using namespace std;

int a[6][6], b[6];

void arrange() {
    queue <int> q1, q2;
    for (int i = 0; i < 5; i++) if (!b[i]) q1.push(i);
    while (!q1.empty()) {
        int x = q1.front();
        q2.push(x);
        q1.pop();
        for (int i = 0; i < 5; i++) {
            if (a[x][i]) {
                b[i]--;
                if (!b[i]) q1.push(i);
            }
        }
    }
    if (q2.size() == 5) while (!q2.empty()) printf("%c", (q2.front()+'A')), q2.pop();
    else printf("impossible");
}

int main() {
    //freopen("in", "r", stdin);
    char p1, p2, p3;
    for (int i = 0; i < 5; i++) {
        cin >> p1 >> p2 >> p3;
        if (p2 == '>') b[p1-'A']++, a[p3-'A'][p1-'A']++;
        else b[p3-'A']++, a[p1-'A'][p3-'A']++;
    }
    arrange();
    puts("");
}
