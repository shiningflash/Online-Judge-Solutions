#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(1), n, p, m;
    string s;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &m);
        deque<int> q;
        printf("Case %d:\n", t++);

        while (m--) {
            cin >> s;
            if (s == "pushLeft" || s == "pushRight") {
                scanf("%d", &p);
                if (q.size() == n) printf("The queue is full\n");
                else {
                    if (s == "pushLeft") {
                        q.push_front(p);
                        printf("Pushed in left: %d\n", p);
                    }
                    else {
                        q.push_back(p);
                        printf("Pushed in right: %d\n", p);
                    }
                }
            }
            else {
                if (q.size() == 0) printf("The queue is empty\n");
                else {
                    if (s == "popLeft") {
                        printf("Popped from left: %d\n", q.front());
                        q.pop_front();
                    }
                    else {
                        printf("Popped from right: %d\n", q.back());
                        q.pop_back();
                    }
                }
            }
        }
    }
}