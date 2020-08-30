#include <bits/stdc++.h>
using namespace std;

struct team {
    int pos, id, solve;
};

bool comp(team a, team b) {
    if (a.solve == b.solve) return a.pos < b.pos;
    return a.solve > b.solve;
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n, x;
    cin >> n;
    team z[n];
    for (int i = 0; i < n; i++) z[i].pos = i, cin >> z[i].id >> z[i].solve;
    sort(z, z+n, comp);
    for (int i = 0; i < n; i++) cout << z[i].id << " " << z[i].solve << endl;
}
