#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int a[_mx+5];

struct data {
    string s;
    LLI n;
};

int main() {
    // freopen("in.txt", "r", stdin);

    queue <data> q;
    LLI t, x, y;
    string p;
    cin >> t >> x;
    for (int i = 0; i < t; i++) {
        cin >> p >> y;
        data z;
        z.s = p;
        z.n = y;
        q.push(z);
    }
    LLI k = 0;
    while (!q.empty()) {
        data w = q.front();
        q.pop();
        if (w.n > x) {
            k += x;
            w.n -= x;
            q.push(w);
        }
        else {
            k += w.n;
            cout << w.s << " " << k << endl;
        }
    }

    return 0;
}
