#include <bits/stdc++.h>
using namespace std;

int t(0), tst, n, p;
map <int, int> mp;
queue <int> q1;

inline void enqueue(queue<int> q2[]) {
    scanf("%d", &n);
    p = mp[n];
    if (q2[p].empty()) q1.push(p);
    q2[p].push(n);
}

inline void dequeue(queue<int> q2[]) {
    p = q1.front();
    printf("%d\n", q2[p].front());
    q2[p].pop();
    if (q2[p].empty()) q1.pop();
}

int main() {
    //freopen("in", "r", stdin);
    while (scanf("%d", &tst) && tst > 0) {
        mp.clear();
        q1 = {};
        for (int i = 0; i < tst; i++) {
            scanf("%d", &n);
            while (n--) scanf("%d", &p), mp[p] = i;
        }
        string s;
        printf("Scenario #%d\n", ++t);
        queue <int> q2[1001];
        while ((cin >> s) && s[0] != 'S') {
            if (s[0] == 'E') enqueue(q2);
            else if (s[0] == 'D') dequeue(q2);
        }
        printf("\n");
    }
}