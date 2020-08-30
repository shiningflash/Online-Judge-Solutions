#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int n;
vector <int> v[30];

void fb(int a, int &i, int &j) {
    for (i = 0; i < n; i++)
        for (j = 0; j < v[i].size(); j++)
            if (v[i][j] == a) return;
}

void clr(int p, int h) {
    for (int i = h+1; i < v[p].size(); i++)
        v[v[p][i]].pb(v[p][i]);
    v[p].resize(h+1);
}

void pile(int p1, int h, int p2) {
    for (int i = h; i < v[p1].size(); i++)
        v[p2].pb(v[p1][i]);
    v[p1].resize(h);
}

void print() {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        for (int j = 0; j < v[i].size(); j++) printf(" %d", v[i][j]);
        printf("\n");
    }
}

int main() {
//    freopen("in", "r", stdin);
    int a, b, p1, p2, h1, h2;
    string s1, s2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) v[i].pb(i);
    while ((cin >> s1 >> a >> s2 >> b) && s1[0] != 'q') {
        fb(a, p1, h1);
        fb(b, p2, h2);
        if (p1 == p2) continue;
        if (s2[0] == 'o') clr(p2, h2);
        if (s1[0] == 'm') clr(p1, h1);
        pile(p1, h1, p2);
    }
    print();
    return 0;
}